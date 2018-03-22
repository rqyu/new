#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write(ostream& out)
{
    out << 201 << ',' << 4.32 << ',' << "New String!" << endl;
}

int main()
{

    // for text files only
    ofstream out;
    // open file from given file name, current folder
    // if file is not available, ofstream.open will create the file or open the connection
    // by default it will be opened just for writing

    // open or append, using bitwise or
    //out.open("some.txt", ios_base::out | ios_base::app);
    // or use a constructor
    //ofstream out("some.txt", ios_base::out | ios_base::app);

    // open, delete all content then write; out will only override the entered chars, if input is less than original then the extra will not be erased
    out.open("some.txt", ios_base::out | ios_base::trunc);

    // writing into the file is the same as using cout
    out << 10 << ',' << 654.32 << ',' << "Some String!" << endl;
    out << "Writing stuff into the file..." << endl;
    write(out);
    write(out);

    // after finish writing into the file, close the connection
    // file will be closed when it goes out of scope automatically
    out.close();

    ifstream inf;
    inf.open("some.txt");

    int i;
    double d;
    char c;
    string s;

    // once extraction fails, all following extraction will stop to work
    // call cin.clear() after fail state, cin stays at the position causing problem
    // cin.ignore() escapes the next char.
    // call clear first, then do other stuff
    // cin.good() check if next operator has possibility of success.
    inf >> i >> c >> d >> c;

    char ca[32];
    // read also reads \n, the new line character, watch out
    inf.read(ca, 10);

    string ns;

    cout << i << c << d << c << ca << endl;

    inf.close();

    return 0;

}