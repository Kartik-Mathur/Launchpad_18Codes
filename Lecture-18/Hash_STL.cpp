#include <iostream>
#include <unordered_map>
using namespace std;

class Fruits{
public:
    string name;
    int price;
    int sweetness;

    Fruits(){
    }
};

int main(){
    //unordered_map <string,int> h;
    unordered_map <string,Fruits> h;
    Fruits F("", , , , );
    h[F.name]=F;
    h.insert(make_pair("Apple",120));
    h.insert(make_pair("Guava",100));
    h.insert(make_pair("PineApple",50));
    //h.insert(make_pair("Apple",120));

    pair <string,int> p("Banana",20);
    h.insert(p);
    auto i=1;
    cout<<i<<endl;
    /*
    for(auto node:h){
        cout<<node.first<<" "<<node.second<<endl;
    }
*/
    for(int i=0;i<h.bucket_count();i++){
        cout<<"Bucket "<<i<<"->";
        for(auto it=h.begin(i);it!=h.end(i);it++){
            cout<<it->first<<"->"<<it->second<<" ";
        }
        cout<<endl;
    }



return 0;
}
