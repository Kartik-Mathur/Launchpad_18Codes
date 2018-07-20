#include <iostream>
#include <unordered_map>
using namespace std;

class node{
public:
    char data;
    unordered_map<char,node*> m;
    bool isTerminal;

    node(char d){
        data=d;
        isTerminal=false;
    }
};

class Trie{
    node* root;
public:
    Trie(){
        root=new node('\0');
    }
    void addWord(char *word){
        node* temp=root;
        for(int i=0;word[i]!='\0';i++){
            char ch=word[i];

            if(temp->m.count(ch)==0){
                node* child=new node(ch);
                temp->m[ch]=child;
                temp=child;
            }
            else{
                temp=temp->m[ch];
            }

        }temp->isTerminal=true;
    }

    bool isPresent(char * word){
        node* temp=root;
        for(int i=0;word[i]!='\0';i++){
            char ch=word[i];

            if(temp->m.count(ch)){
                temp=temp->m[ch];
            }
            else{
                return false;
            }
        }
        return temp->isTerminal;
    }

};

int main(){
    Trie t;

    t.addWord("Apple");
    t.addWord("Ape");
    t.addWord("Not");
    t.addWord("News");
    //t.addWord("Appl");
    char ch[100];
    while(1){
        cin>>ch;
        if(t.isPresent(ch)){
            cout<<"Exists"<<endl;
        }
        else{
            cout<<"Doesnot Exists"<<endl;
        }



    }
return 0;
}








