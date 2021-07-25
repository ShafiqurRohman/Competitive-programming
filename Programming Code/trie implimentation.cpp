#include<bits/stdc++.h>
using namespace std;

struct Node{
    bool mark;
    Node *next[27];

    Node(){
        mark = false;
        for(int i=0; i<26; i++){
            next [i] = NULL;
        }
    }

};


Node *root = NULL;


void insertString(string s, int len){
    Node *current = root;
    for(int i=0; i<len; i++){
        int index = s[i] - 'a';

        if(current-> next[index] == NULL){
            current ->next[index] = new Node();
        }

        current = current->next[index];
    }
    current ->mark  =  true;

}


bool searchString(string s, int len){
    Node *current = root;

    for(int i=0; i<len; i++){
        int index = s[i] - 'a';
        if(current->next[index] == NULL){
            return false;
        }
        current = current->next[index];
    }
    return current->mark;
}

void deleteTrie(Node *current){
    for(int i=0; i<26; i++){
        if(current->next[i] != NULL){
            deleteTrie(current->next[i]);
        }
    }
    delete(current);

    return;

}


int main(){

    root = new Node();
    int num_word;

    puts("ENTER NUMBER OF WORDS");
    cin >> num_word;

    for (int i = 1; i <= num_word; i++) {
//        char str[50];
//        scanf("%s", str);//this code for c.
        string s;
        cin>>s;

      //  insertString(str, strlen(str));
      insertString(s, s.size());
    }


    int query;
    puts("ENTER NUMBER OF QUERY");
    cin >> query;

    for (int i = 1; i <= query; i++) {
    //        char str[50];
    //        scanf("%s", str);//this code for c.
            string s;
            cin>>s;

//        if (searchString(str, strlen(str)))
            if (searchString(s, s.size())){
            printf("FOUND  ");
            cout<<s<<endl;
            }

        else{
            puts("NOT FOUND");
        }
    }


    deleteTrie(root);

    return 0;
}
/*
4
abcd
shafiq
ami
amina
4
abcd
shafiq
ami
amina
*/
