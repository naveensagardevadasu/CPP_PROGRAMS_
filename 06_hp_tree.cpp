#include<iostream>
#include<vector>

using namespace std;

vector <char> tree {'A','A','C'};

int main()
{
    // cout<<tree.at(0);

    vector <char> heavy_path {'C','A'};

    heavy_path.insert(heavy_path.end(),heavy_path.at(0));

    for(const char &c : tree)
    {
        cout << c <<' ';
    }
    cout<<endl<<' ';
    char temp = heavy_path.at(heavy_path.size()-2);
    heavy_path.at(heavy_path.size()-2)=heavy_path.at(heavy_path.size()-1);
    heavy_path.at(heavy_path.size()-1) = temp;

    for(const char &c : heavy_path)
    {
        cout<< c <<' ';
    } 
    
    return 0;
}