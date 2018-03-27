#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include <sstream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
string Int_to_Str( int x ){
    string num = "";
    if ( x == 1 ){ num = "1"; }
    else{ num = "0"; }
    return num;
}

string decimal_to_binary( int num ){
    int mod = 0;
    string binary = "";
    while(num != 0){
      mod = num % 2;
      num = num / 2;
      binary = Int_to_Str( mod ) + binary;
    }

    for ( int i = binary.length(); i < 8; i++ ){
        binary = "0" + binary;
    }

    return binary;
}

string small_to_capital(string P){
    int ascci = 0;
    for ( int i = 0; i < P.length() ; i++){
        ascci = (int)P[i];
        if ( ascci >= 97 and ascci <= 122 ){ ascci -= 32; }
        P[i] = (char)ascci;
    }
    return P;
}

string string_to_string( string E ){
    for ( int i = 0; i < 8; i++){
        if ( E[i]=='0'){
            E[i]='a';
        }
        else{
            E[i]='b';

        }
    }
    return E;
}

string string_to_binary(string x){
    for ( int i = 0; i < 8; i++){
        if ( x[i]=='a'){
            x[i]='0';
        }
        else{
            x[i]='1';

        }
    }
    return x;
}
int a[100];
struct Pairs
{
    char Letter;
    string Pattern;
};

void CheckLetter(Pairs pr[],char c)
{
    for(int k=0;k<27;k++)
    {
        if(c==pr[k].Letter)
        {
            cout << pr[k].Pattern << " " ;
        }
    }
}

void CheckPattern(Pairs pr[],string temp)
{
    for(int j=0;j<26;j++)
    {
       if(temp==pr[j].Pattern)
        {
           cout << pr[j].Letter;
        }
    }
}







int main()
{
int number;
cout<<" Ahlan ya user ya habibi."<<endl;
cout<<"choose the specific cipher from 0 to 9";
cout<<"enter your number: ";
cin >> number;
if (number==0){
string character="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghigklmnopqrstuvwxyz";
int a;
cout<<"1- Cipher a message "<<endl;
cout<<"2- Decipher a message "<<endl;
cout<<"enter your number 1 or 2: ";
int num;
cin>>num;
cin.ignore();
string newname;
string letter;
string space=" ";
cout<<"enter your the message to AFFINE CIPHER : ";
cin>>letter;
int length=letter.size();
for(int i=0;i<=length;i++){
 if(letter[i]==space[0]){
 newname=newname+space;
 }
 for(int x=0; x<=51;x++){
  if(letter[i]==character[x]){
   a=(5*(x)+8);
  while(a>25){
    a=a-26;
}
newname=newname+character[a];
}
}
}
cout<<"message after AFFINE CIPHER is: "<<newname<<endl;
   }

////////////////////////////////////////////////////////////////////////
else if(number==1){
string ask = "", plain = "" , cipher = "";
    int asc = 0 , steps = 0;
    char letter;

    cout << "Encryption >> press 1 " << endl;
    cout << "Decryption >> press 2 " << endl;
    cout << "1 || 2 : ";
    cin  >> ask;

    cout << endl;
    cout << "Enter Message : ";
    cin.ignore();
    getline( cin , plain );

    cout << "Enter Number Of Steps : ";
    cin  >> steps;

	steps %= 26;

    if ( ask == "2" ){ steps *= -1; }

    for ( int i = 0; i < plain.length(); i++ ){
        letter = plain[i];
        asc  = ( int )letter; // asc code
        if ( asc >= 65 && asc <= 90 ){
            asc += steps;
            if ( asc > 90){ asc -= 26; }
            else if ( asc < 65 ){ asc += 26; }
        }
        else if ( asc >= 97 && asc <= 122 ){
            asc += steps;
            if ( asc  > 122 ){ asc -= 26; }
            else if ( asc < 97 ){ asc += 26; }
        }
        cipher += (char)asc;
    }
    cout << endl << endl;
    cout << "Cipher Message is  :  " << cipher;
    cout << endl << endl;
}
/////////////////////////////////////////////////////////////////////////
else if(number==2){
cout<<" \t \t Welcome To Atbash Chipper  "<<endl;
cout<<"What do you like to do today? "<<endl;
cout<<"1- Cipher a message "<<endl;
cout<<"2- Decipher a message "<<endl;
cout<<"enter your number 1 or 2: ";
int number;
cin>>number;
string space=" ";
string character="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
string character1="ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba";
string newletter;
string letter;
cout<<"ENTER YOUR MESSAGE : ";
cin.ignore();
getline(cin,letter);
int length=letter.size();
for(int i=0;i<=length;i++){
    if(letter[i]==space[0]){
      newletter=newletter+space;
    }
    for(int x=51;x>=0;x--){
        if(letter[i]==character1[x]){
            newletter=newletter+character[x];
        }
    }
}
cout<<"YOUR NEW  MESSAGE IS : "<<newletter<<endl;
}
////////////////////////////////////////////////////////////////////////
else if(number==3){ //dh mzbot
int num;
cout<<" 1- Cipher your message : \n 2- Decipher your message \n ";
cin>>num;
cin.ignore();
string character="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
string space=" ";
string letter;
string name;
int sum;
cout<<"enter your message: ";
cin>>letter;
int length=letter.size();
for(int i=0;i<=length;i++){
    if(letter[i]==space[0]){
        name=name+space;
    }
    for(int x=0;x<=51;x++){
        if(letter[i]==character[x]){
            if((x+13)>25){
                sum=(x-13);
            }else{
                sum=(x+13);

            }
            if ((x>=26)&&(x<=51)){
                if((x+13)>=51){
                    sum=(x-13);
                }
                else{
                    sum=(x+13);
                }



        }
        name=name+character[sum];
    }
    }
}

cout<<"your message is: "<<name;
}
/////////////////////////////////////////////////////////////
else if (number==4){
    string ask ="";
    cout << "cipher << press 1: or decipher << press 2:" ;
    cin  >> ask;


    int ascci = 0;
    string conv = "" , result = "";

    if ( ask == "1" ){
        cout<<" Enter Your Message: ";
        string cipher = "";
        cin.ignore();
        getline( cin , cipher );

        cipher = small_to_capital( cipher );

        for ( int i = 0; i < cipher.length(); i++ ){

            ascci = (int)cipher[i];

                conv = decimal_to_binary( ascci );
                conv = string_to_string( conv );
                result += conv;


        }
        cout << result << endl;

    }
    else {

        string message ="";
        cout <<"enter your message: "<< endl;
        cin.ignore();
        getline( cin , message );
        for ( int i = 0; i < message.length(); i++){
            if ( message[i]== 'a' ){
                message[i]= '0';
            }
            else if( message[i]== 'b'){
                message[i]='1';
            }
        }
        string txt = ""; int ascci = 0;
        for ( int i = 0; i < message.length(); i += 8 ){
            txt = "";

            for ( int j = 0; j < 8; j++ ){ txt += message[i+j]; }

        int counter = 0;
        int num = 0;
        int sum = 0;


        for(int i = 7; i > -1 ; i--){

            if (txt[i] == '1'){
                num=1;
            }
            else{num = 0;}
            sum += num*pow(2,counter);
            counter++;

        }

        result += (char)sum;

        }

        cout << result;

    }

}
//////////////////////////////////////////////////////////////
else if (number==5){
    string arrs="abcdefghijklmnopqrstuvwxyz";
vector <char>enc;
char key[26];
char s='a';
bool a;
int C=5;
string txt;
string k;
int choice;
 cout<<"Ahlan ya user ua habibi."<<endl;
    cout<<"What do you like to do today?"<<endl;
    cout<<"1- Cipher a message"<<endl;
    cout<<"2- Decipher a message"<<endl;
    cin>>choice;
    cin.ignore();
    if(choice==1)
    {
        cout<<"Please enter the message to cipher:"<<endl;
        getline(cin,txt);

        cout<<"please enter the first 5 letters of the key:"<<endl;
        cin>>k;
        for (int i=0; i<5; i++)
        {
            key[i]=k[i];
        }
loop:

        for (int j=0; j<5; j++)
        {
            if(s!=k[j]&&s!=122)
            {
                a=true;
            }
            else if(s==k[j]&s!=122)
            {
                s++;
                goto loop;
            }

        }
        if(a==true&&C<27)
        {
            key[C]=s;
            s++;
            C++;
            goto loop;
        }
         for (int q=0; q<txt.length(); q++)
    {
        for (int u=0; u<26; u++)
        {
            if(int(txt[q])==32)
            {
                enc.push_back(' ');
                break;
            }
            if(txt[q]==arrs[u])
            {
                enc.push_back(key[u]);
            }

        }
    }
    cout<<"Your encrypted text :"<<endl;
    for (int v=0; v<enc.size(); v++)
    {
        cout<<enc[v];
    }
    }

else if (choice==2)
    {
        cout<<"Please enter the encrypted text :"<<endl;
        getline(cin,txt);
        cout<<"please enter the first 5 letters of the key:"<<endl;
        cin>>k;
            for (int i=0; i<5; i++)
    {
        key[i]=k[i];
    }
loop1:

    for (int j=0; j<5; j++)
    {
        if(s!=k[j]&&s!=122)
        {
            a=true;
        }
        else if(s==k[j]&s!=122)
        {
            s++;
            goto loop1;
        }

    }
    if(a==true&&C<27)
    {
        key[C]=s;
        s++;
        C++;
        goto loop1;
    }
for (int q=0; q<txt.length(); q++)
    {
        for (int u=0; u<26; u++)
        {
            if(int(txt[q])==32)
            {
                enc.push_back(' ');
                break;
            }
            if(txt[q]==key[u])
            {
                enc.push_back(arrs[u]);
            }

        }
    }
cout<<"The original text is:"<<endl;
        for (int v=0; v<enc.size(); v++)
        {
            cout<<enc[v];
        }






}

}

//////////////////////////////////////////////////////////////
else if(number==6){
    string row1="abcdeABCDE", row2="fghijFGHIJ", row3="klmnoKLMNO", row4="pqrstPQRST", row5="uvxyzUVXYZ"; // store all characters in 5 rows
    string col1="afkpuAFKPU", col2="bglqvBGLQV", col3="chmrxCHMRX", col4="dinsyDINSY", col5="ejotzEJOTZ"; // store all characters in 5 columns
    string space=" ";
    string key;
    string memory1 ;
    string input;
    int choice;
    cout << " What do you like to do today?"<<endl;
    cout << " 1- Cipher a message "<<endl;
    cout << " 2- Decipher a message "<<endl;
    cout << " your choice : ";
    cin >> choice ;
    if(choice==1){
        cout << " Enter your key : ";
        cin >> key ;
        cout <<" Enter your message : ";
        cin.ignore();
        getline(cin,input);  // read his message
        int count_input=0 , count_row=0 , count_col=0 ;
        int len=input.length();
        while(count_input < len){  // loop to go through every character in the input
            count_row=0 , count_col=0;
            while(count_row<10){  // loop to compare every character in the input by 5 rows to know this character in which row
                if(input[count_input]==row1[count_row]){
                    cout << key[0];
                }
                else if(input[count_input]==row2[count_row]){
                    cout << key[1];
                }
                else if(input[count_input]==row3[count_row]){
                    cout << key[2];
                }
                else if(input[count_input]==row4[count_row]){
                    cout << key[3];
                }
                else if(input[count_input]==row5[count_row]){
                    cout << key[4];
                }
                count_row+=1;
            }

            while(count_col<10){  // loop to compare every character in the input by 5 columns to know this character in which column
                if(input[count_input]==col1[count_col]){
                    cout << key[0];
                }
                else if(input[count_input]==col2[count_col]){
                    cout << key[1];
                }
                else if(input[count_input]==col3[count_col]){
                    cout << key[2];
                }
                else if(input[count_input]==col4[count_col]){
                    cout << key[3];
                }
                else if(input[count_input]==col5[count_col]){
                    cout << key[4];
                }
                count_col+=1;
            }
            if(input[count_input]==space[0]){  // condition for space ( if he find space in message )
                cout<<space;
            }
            count_input+=1;
        }
    }
    // Decipher
    else if(choice==2){
        cout << " Enter your key : ";
        cin >> key ;
        cout<<" Enter Cipher text : ";
        cin.ignore();
        getline(cin,input);
        int input_count=0 , x =0 ,i=0; ;
        int len=input.length();
        while(input_count<len){
            if(input[input_count]==space[0]){  // condition for space ( if he find space in message )
                cout<<space;
                input_count++;
            }
            else{  // get first number the represent the row and store this row in memory1 (variable)
                if(input[input_count]== key[0]){
                    memory1 = row1;
                }
                else if (input[input_count]== key[1]){
                    memory1 = row2;
                }
                else if (input[input_count]== key[2]){
                    memory1 = row3;
                }
                else if (input[input_count]== key[3]){
                    memory1 = row4;
                }
                else if (input[input_count]== key[4]){
                    memory1 = row5;
                }
                // second number represent the column so I get this number and this number is the index of character in memory1
                input_count++;
                x =0;
                while(x<5){
                    if(input[input_count]==key[x]){
                        cout<<memory1[x];
                        break;
                    }
                    x++;
                }
                input_count++;
            }
        }
    }

}
///////////////////////////////////////////////////////////////
else if(number==7){
    Pairs pr[]= {{'a',".-"},{'b',"-..."},{'c',"-.-."},{'d',"-.."},{'e',"."},{'f',"..-."},{'g',"--."},{'h',"...."},{'i',".."},{'j',".---"},{'k',"-.-"},{'l',".-.."},{'m',"--"},{'n',"-."},{'o',"---"},{'p',".--."},{'q',"--.-"},{'r',".-."},{'s',"..."},{'t',"-"},{'u',"..-"},{'v',"...-"},{'w',".--"},{'x',"-..-"},{'y',"-.--"},{'z',"--.."},{' '," "}};

    int choice;
    cout << "Welcome to Morse Code Encryption & Decryption program!" << endl;
    cout << "What do you like to do?" << endl;
    cout << "1-Cipher a message" << endl;
    cout << "2-Decipher a message" << endl;
    cout << "3-Exit" << endl;
    cin >> choice;
    while (true)
    {
        if (choice > 3)
            {
            cout << "Invalid choice!\nPlease choose another choice" << endl;
            cin >> choice;
            }else{
                break;
                }
    }

    if(choice==1)
    {
        string sentence;
        cout << "Please enter the message you want to cipher:" << endl;
        cin.ignore();
        getline(cin,sentence);

        for(int i=0;i<sentence.size();i++)
        {
            char c = tolower(sentence[i]);
            CheckLetter(pr,c);

        }

    }
    else if(choice==2)
    {
        string pattern="";
        cout << "Please enter the message you want to decipher:" << endl;
        cin.ignore();
        getline(cin,pattern);
        pattern=pattern+' ';
        string temp ="";
        for(int i=0;i<pattern.size();i++)
        {

            if(pattern[i] == ' ')
            {
                CheckPattern(pr,temp);

                temp = "";
                   if(i != pattern.size()-1)
                {
                    if(pattern[i+1]== ' ' && pattern[i+2]== ' ')
                    {
                         // i++;
                        cout << " ";
                    }
                }


                  continue;
            }

        temp+=pattern[i];


        }

    }
    else if(choice==3){
            return 0;

}
}

//////////////////////////////////////////////////////////////////////////////////
else if(number==8){
     int cases,cases2;
long long hex_encrypted;
  string msg,encrypted_msg,decrypted_msg;
  char key;
  cout << "For Cipher enter 1 or 2 for diCipher : ";
  cin >> cases;
 cin.ignore();
  if (cases ==1){
        cout << "Enter the msg : ";
  getline(cin,msg);
  cout << "Enter the key letter : ";
  cin >> key;
  int x_key =int(key);
  for(int i=0;i<msg.length();i++)
  {
         int x =int(msg[i]);
      int y=x^x_key;
      if (y<16 )
        cout << 0;
      cout << hex  <<y;
      encrypted_msg+=char(y);

  }
  cout << endl << encrypted_msg;
  }
  else
  {
      cout << "1 if you want to enter text ,2 if you want to enter hexa :";
      cin >> cases2;
     cin.ignore();
      if (cases2==1)
      {
            cout << "Enter the msg : ";
      getline(cin,msg);
      cout << "Enter the key letter : ";
      cin >> key;
      int x_key =int(key);
            for(int i=0;i<msg.length();i++)
  {   int x =int(msg[i]);
      int y=x^x_key;
      if (y<16 )
        cout << 0;
      cout << hex  <<y;
      encrypted_msg+=char(y);

  }
  cout << endl << encrypted_msg;

      }
      else
      {
    cout << "Enter the msg  : ";
    getline(cin,msg);
      cout << "Enter the key letter : ";
      cin >> key;
      int x_key =int(key);
     for(int i=0;i<msg.size();i+=2)
     {  int x1=0;
         if(msg[i]>='0'&&msg[i]<='9')
         { int y1;
         string s="";
         s+=msg[i];
             stringstream geek(s);
             geek >> y1;
             x1+=(y1*16);
         }
         else if (msg[i]=='a'||msg[i]=='A')

             x1+=(10*16);

         else if(msg[i]=='b'||msg[i]=='B')

             x1+=(11*16);

         else if(msg[i]=='c'||msg[i]=='C')

             x1+=(12*16);
         else if(msg[i]=='d'||msg[i]=='D')
                x1+=(13*16);
         else if(msg[i]=='e'||msg[i]=='E')
            x1+=(14*16);
         else if(msg[i]=='f'||msg[i]=='F')
            x1+=(15*16);


         if(msg[i+1]>='0'&&msg[i+1]<='9')
         {
             int z;
             string s1="";
             s1+=msg[i+1];
             stringstream geek2(s1);
             geek2 >> z;

             x1+=z;
         }
         else if (msg[i+1]=='a'||msg[i+1]=='A')

             x1+=10;

         else if(msg[i+1]=='b'||msg[i+1]=='B')

             x1+=11;

         else if(msg[i+1]=='c'||msg[i+1]=='C')

             x1+=12;
         else if(msg[i+1]=='d'||msg[i+1]=='D')
                x1+=13;
         else if(msg[i]=='e'||msg[i+1]=='E')
            x1+=14;
         else if(msg[i+1]=='f'||msg[i+1]=='F')
            x1+=15;


         int y2=x1^x_key;
         decrypted_msg+=char(y2);
         if(y2<=15)
            cout << 0;
         cout << hex << y2;
     }
    cout << endl << decrypted_msg << endl;

      }

  }

}
//////////////////////////////////////////////////////////////////////////////////
else if(number==9){

    cout<<"Ahlan ya user ya habibi."<<endl;
    cout<<"what do you like to do today ?"<<endl;
    cout<<"1- Cipher a message"<<endl<<"2- Decipher a message"<<endl<<"3- End"<<endl;
    cout<<"enter your choose :";
    int num;
    cin>>num;
    if (num==1){
    int i,r,n,m,k,z,l,c,b;
    string s1,s2;
    cout<<"enter the key: ";
    cin>>r;
    cout<<"the text : ";
    cin>>s1;
    z=1;
    i=0;
    k=0;
    c=0;
    n=(2*r)-2;
    m=n;
    l=s1.length();
    while(z==1){
     if(i>=l){
        r-=1;
        k++;
        i=k;
        n-=2;
        c=0;

        if(n<2){
            n=m;
        }

        }

    for(;i<l;i+=n){
        char x;

        x=s1[i];
        s2+=x;
        c++;

        if(c>=2 && (m-n)!=0 ){
            char y;
            b=m-n;
            if(i+b<l){
            i+=b;
            y=s1[i];
            s2+=y;

            }

       }




    }
    if(r==1){

        cout<<endl<<"cipher text -> "<<s2<<endl;
        return 0;
    }
    }
    }

    if(num==2){
    int i,r,n,m,k,z,l,c,b,x,q,g,a[100];
    string s1,s2;
    cout<<"enter the key: ";
    cin>>r;
    cout<<"the text : ";
    cin>>s1;
    z=1;
    i=0;
    k=0;
    c=0;
    x=0;
    q=0;
    g=-1;
    n=(2*r)-2;
    m=n;
    l=s1.length();
    while(z==1){
     if(i>=l){
        r-=1;
        k++;
        i=k;
        n-=2;
        c=0;

        if(n<2){
            n=m;
        }

        }

    for(;i<l;i+=n){

        a[x]=i;

        x++;
        c++;



        if(c>=2 && (m-n)!=0 ){

            b=m-n;
            if(i+b<l){
            i+=b;
            a[x]=i;
            x++;
            }
       }
    }
    while(r==1){
        g++;
        if(g==l){
        cout<<endl<<"deciphered text -> "<<s2<<endl;
        return 0;
        }
        else if(a[q]==g){
            int s;
            s=q;
            s2+=s1[s];
            q=0;
        }
        else {
            g--;
            q++;
        }

    }
    }
    }
    if(num==3){
        return 0;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////

    return 0;

}
