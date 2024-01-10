#include <iostream>

using namespace std;

int main() {
    srand(time(0));
    int n;
    n=rand()% (20-1)+1;
    cout<<n<<endl;

    int hak=4;
    int sayi;
    cout<<"1 ile 20 Arasında Bir Sayı Girin."<<endl;
    cin>>sayi;
    for (int i = 1; i <5; ++i) {
        if (n==sayi){
            cout<<"Tebrikler Kazandınız."<<endl;

            break;
        }
        else if(n>sayi){
            cout<<"Girdiğin sayıyı Yükselt"<<endl;
            cout<<"Kalan Hak:"<<hak<<endl;

        }
        else if (n<sayi){
            cout<<"Girdiğin sayıyı Azalt"<<endl;
            cout<<"Kalan Hak:"<<hak<<endl;

        }
        hak--;
        cin>>sayi;

        if (hak==0 && sayi==n){
            cout<<"Tebrikler Kazandınız."<<endl;
        }
        else if (hak==0){
            cout<<"Oyunu Kaybettiniz."<<endl;
        }
    }


    return 0;
}
