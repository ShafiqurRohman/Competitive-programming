#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    if(a=="vertebrado")
    {
        if(b=="ave"&&c=="carnivoro")
            cout<<"aguia"<<endl;
        else if(b=="ave"&&c=="onivoro")
            cout<<"pomba"<<endl;
        //printf("pomba\n");
        else if(b=="mamifero"&&c=="onivoro")
            cout<<"homem"<<endl;
        //printf("homem\n");
        else if(b=="mamifero"&&c=="herbivoro")
            cout<<"vaca"<<endl;
        //printf("vaca\n");
        }
        else if(a=="invertebrado")
        {
            if(b=="inseto"&&c=="hematofago")
                cout<<"pulga"<<endl;
            //printf("pulga\n");
            else if(b=="inseto"&&c=="herbivora")
                cout<<"lagarta"<<endl;
            // printf("lagarta\n");
            else if(b=="anelideo"&&c=="hematofago")
                cout<<"sanguessuga"<<endl;
            //printf("sanguessuga\n");
            else if(b=="anelideo"&&c=="onivoro")
                cout<<"minhoca"<<endl;
            // printf("minhoca\n");
            }
          return 0;
        }
