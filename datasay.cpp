#include<iostream>
#include<fstream>
using namespace std;

void inputdata(ofstream &input){
	input << "Nama : Muhammad fikri al kautsar"<<endl;
	input << "Stambuk : 13020190127"<<endl;
	input << "Kelas : A3"<<endl;

}

int main(){
	ofstream mhsfile;
	
	mhsfile.open("datamhs.txt",ios::app | ios::out);
	
	inputdata(mhsfile);
	
	mhsfile.close();
	
}

