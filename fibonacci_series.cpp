#include <iostream>
using namespace std;

void printingfibonacciseries(int n){
    int size = n + 1;
    int arr[size];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2;i < size ; i++){
        arr[i] = arr[i-1]+ arr[i-2];
        

    }
    cout<<"[";
    for(int j = 0; j <size ; j++){
        if(j == size -1){
            cout<<arr[j]<<"";
            break;
        }
        cout<<arr[j]<<", ";
    }
    cout<<"]"<<endl;
}

int indexnumber(int n){
    if (n == 0){
        return 0;
    }
    if(n == 1 || n ==2){
        return 1;
    }
    int size = n + 1;
    int arr[size];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2;i < size ; i++){
        arr[i] = arr[i-1]+ arr[i-2];

    }
    return arr[n];


}
int main() 
{
    cout <<"welcome to the program of printing the number of index in fibonacci series"<<endl;
    int n;
    cout <<"please enter the index number : ";
    cin>>n;
    cout <<"the number on the index "<<n<<" is "<<indexnumber(n)<<endl;
    cout <<"bye bye take care"<<endl;
    cout <<"hye you wanna print the fibonacci series till ?"<<endl;
    cout <<"reply in y or n"<<endl;
    char reply;
    cin>>reply;
    if(reply == 'y'){
        printingfibonacciseries(n);

    }
    cout <<"bye again good decision"<<endl;
    
return 0;
}