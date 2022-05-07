#include "_header.h"

void sortingAlgo(int *arr, int arraySize, char comm){
    switch (comm) {
        case '1':
            for(int i = 0; i<arraySize; i++){
                for (int g= 0; g< arraySize; g++) {
                    if(arr[g]>arr[i]){
                        int temp;
                        temp = arr[g];
                        arr[g] = arr[i];
                        arr[i] = temp;
                    }
                }
            }
            for(int i = 0; i< arraySize; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        case '2':
            for(int i = 0; i<arraySize; i++){
                for (int g= 0; g< arraySize; g++) {
                    if(arr[i]>arr[g]){
                        int temp;
                        temp = arr[i];
                        arr[i] = arr[g];
                        arr[g] = temp;
                    }
                }
            }
            for(int i = 0; i< arraySize; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        case '3':
            for(int i = 0; i< arraySize; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        default:
            cout<<"Invalid command"<<endl;
            break;
    }
}

int main() {
    
    char ins;
    bool loop = true;
    
    while(loop){
        int size;
        cout<<"input the size of the array...";
        cin>>size;
        
        int Arr[size];
        for(int i = 0; i<size;i++){
            int value;
            cout<<"Input value...";
            cin>>value;
            Arr[i] = value;
        }
        
        cout<<"\n[1]Ascending Order"<<endl;
        cout<<"[2]Descending order"<<endl;
        cout<<"[3]Nothing\n"<<endl;
        cout<<"What do you want to do?...";
        char comm;
        cin>>comm;
        
        sortingAlgo(Arr, size, comm);
        
        bool _loop = false;
        do{
            cout<<"\n==============================="<<endl;
            cout<<"Do you want to continue[y/n]";
            cin>>ins;
            cout<<endl;
            switch (ins) {
                case 'y':
                    loop = true;
                    _loop = false;
                case 'Y':
                    loop = true;
                    _loop = false;
                    break;
                case 'n':
                    loop = false;
                    _loop = false;
                    break;
                case 'N':
                    loop = false;
                    _loop = false;
                    break;
                default:
                    cout<<"Invalid command..try again"<<endl;
                    _loop = true;
                    break;
            }
        }while(_loop);
    }
    return 0;
}
