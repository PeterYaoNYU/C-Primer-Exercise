#include <iostream>
#include <string>

using namespace std;

class Sales_data{
    friend istream& operator >> (istream&, Sales_data&);
    friend ostream& operator << (ostream&, const Sales_data&);
    friend bool operator < (const Sales_data&, const Sales_data&);
    friend bool operator == (const Sales_data&, const Sales_data&);

    public:;
    Sales_data()=default;
    Sales_data(const string &book): bookNo(book){}
    Sales_data(istream &is){is>>*this;}
    
    Sales_data& operator += (const Sales_data&);
    string isbn () const {return bookNo;}

    private:
    string bookNo;
    unsigned units_sold =0;
    double sellingprice =0.0;
    double saleprice=0.0;
    double discout=0.0;
};

inline bool compareIsbn (const Sales_data& lhs, const Sales_data& rhs){
    return lhs.isbn()==rhs.isbn();
}

inline bool operator == (const Sales_data& lhs, const Sales_data& rhs){
    return lhs.units_sold==rhs.units_sold &&
    lhs.sellingprice==rhs.sellingprice &&
    lhs.saleprice==rhs.saleprice &&
    lhs.isbn()==rhs.isbn();
}

inline bool operator != (const Sales_data& lhs, const Sales_data& rhs){
    return !(lhs==rhs);
}

Sales_data& Sales_data:: operator+=(const Sales_data& other){
    units_sold+=other.units_sold;
    saleprice=(other.saleprice * other.units_sold + saleprice * units_sold) / (other.units_sold + units_sold);
    if (sellingprice!=0){
        discout= saleprice / sellingprice;
    }
    return *this;
}

Sales_data operator + (const Sales_data& lhs, const Sales_data& rhs){
    Sales_data ret=lhs;
    ret+=rhs;
    return ret;
    
}

istream& operator >> (istream& in, Sales_data& s)
{
    in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice;
    if (in)
        s.discout=s.saleprice/s.sellingprice;
    else
        s.discout=0;
    return in;

}

ostream& operator << (ostream& out, const Sales_data& s)
{
    out<< s.isbn()<<" "<< s.units_sold<<" "<< s.sellingprice<<" "<<s.saleprice<<" "<<s.discout;
    return out;
}

int main()
{
    Sales_data book;
    cout <<"please enter the sales record: "<<endl;
    while (cin>>book){
        cout<<"ISBN, books sold, selling price, sale price, discount is "<<book<<endl;

    }
    return 0;
    
}


