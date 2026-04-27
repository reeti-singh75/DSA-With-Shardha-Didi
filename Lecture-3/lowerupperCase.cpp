 #include <iostream>
 using namespace std;


 int main(){

    char letter;
    cout<<"Entere your letter\n";
    cin>>letter;


    // if (letter>='a'&& letter<='z'){
    //     cout<<"charecture is lowerCase\n";
    // }else{
    //      cout<<"charecture is upperCase\n";
    // }





       if (letter>=65&& letter<=90){
        
         cout<<"charecture is upperCase\n";
    }else{

          cout<<"charecture is lowerCase\n";
    }
    return 0;
 }