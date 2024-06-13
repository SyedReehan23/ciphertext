#include <iostream>
using namespace std;
int main() {
   string Original{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
   string Duplicate{"zuxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA"};
   
   string secret_message{};
   cout<<"Enter your Secrect message : ";
   getline(cin,secret_message);
   
   string encrypted_message{};
   
   cout<<"\nEncrypting message..." <<endl;
   
   for(char c:secret_message){
       size_t position = Original.find(c);
       if(position != string::npos){
           char new_char{Duplicate.at(position) };
           encrypted_message += new_char;
       }else{
           encrypted_message += c;
       }
           
       }
   
   cout<<"\n Encrypted message : "<<encrypted_message<<endl;
   cout<<endl;
    return 0;
}
