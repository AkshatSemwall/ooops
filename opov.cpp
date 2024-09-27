#include <iostream>
using namespace std;
class Date {
private:
    int day, month, year;
public:
    Date() {
        day = 2;
        month = 2;
        year = 2002;
    }
    friend istream& operator>>(istream& in, Date& );
        friend ostream& operator<<(ostream& out, Date& ); 
};
	istream& operator>>(istream& in, Date& temp){
        cout << "Enter date (day month year): ";
        in >> temp.day >> temp.month >> temp.year;
        return in;
    }
    ostream& operator<<(ostream& out,  Date& temp) {
        out << temp.day << "/" << temp.month << "/" << temp.year;
        return out;
    }

int main() {
    Date obj;
    cin>>obj; 
    cout<<obj; 
    return 0;
}
