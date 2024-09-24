


if stream fin("C:\Users\acer\OneDrive\Desktop\STUDY\C-PLUS-CLASS\01basic\02.txt")
if(fin.is_open()){
    string n;
    fin>>n;
    while(fin){

        cout<<n;
        fin>>n;

    }
}
else{
    cout<<"FIle not opened";
}