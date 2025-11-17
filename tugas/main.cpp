#include<iostream>
using namespace std;
int main(){
    system("chcp 65001 >nul");
    string input;
    string usn,pass;
    string merah = "\033[31m";
    string cyan = "\033[36m";
    string biru = "\033[34m";
    string hijau = "\033[32m";
    string ungu = "\033[35m"; 
    string putih = "\033[37m";
    string kuning_terang = "\033[93m";
    string biru_terang = "\033[94m";
    string reset = "\033[0m";
    cout << hijau << R"(

                                         _        _                     
                                        | |      | |                    
         _ __   ___ _ __ _ __  _   _ ___| |_ __ _| | ____ _  __ _ _ __  
        | '_ \ / _ \ '__| '_ \| | | / __| __/ _` | |/ / _` |/ _` | '_ \ 
        | |_) |  __/ |  | |_) | |_| \__ \ || (_| |   < (_| | (_| | | | |
        | .__/ \___|_|  | .__/ \__,_|___/\__\__,_|_|\_\__,_|\__,_|_| |_|
        | |             | |                                             
        |_|             |_|                                             

    )"<< reset << endl;
    cout << cyan<<"selamat datang di perpustakaan"<<merah<<"(maybe:v)"<<reset<<endl;
    cout << "list cmd line"<<endl
        << "login"<<endl
        << "neofetch"<<endl;
    cout << biru<<"root"<<reset<<"@perpustakaan:~$ "<<kuning_terang;
    cin >> input;
    cout << reset;
    if (input == "neofetch" || input == "fastfetch" ||input == "neowofetch")
    {
        
        cout << biru_terang<<R"(
                                .                           
                               / \                          os : linux
                              /   \                         distro : i am using arch btw
                             /     \                        host : perpustakaan
                            /.      \                       cpu : intel core i9 gen 14H
                           ,_ `.     \                      gpu : nvidia gefore rtx 6000
                          /   ``-     .                     real 16 GB gddr8
                         /             `                    ram : 128 gb ddr6
                        /               `.                  
                      .`      ."`".       \                 arch from temu
                     .       '     \       \                
                    /        \      ;     -.\               
                   /        .'     /._     `".                  
                  /   .-"`             `"-.   `.
                .`.-`                       `-._\
                `                               `

            )"<<reset<<endl;
    }
    else if (input == "login")
    {
        cout << "login"<<endl;
        cout << "input usn : "<<kuning_terang;
        cin >> usn;
        cout << reset<<"input password : "<<kuning_terang;
        cin >> pass;
        cout << reset<<hijau<<"berhasil login!"<<endl
            << "promt sesudah login!"<<reset<<endl;
        cout << biru<<usn << reset<<"@perpustakaan :~$ ";
    }
    else{
        cout << merah<<"INVALID"<<reset<<endl;
    }
}
