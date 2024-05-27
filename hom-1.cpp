#include<iostream>
#include<vector>
using namespace std;
//حلا نبيل حماده
void input_array_ed(int array[][2],int size){
    for (int i = 0; i < size; i++)
    {for (int j=0; j<2 ;j++){
        cout<<"enter vetrex["<<i<<" ] ["<<j<<"] = ";
        cin>>array[i][j];

    }}
    
}
//راما ياسر علي
void output_array_ed(int array[][2],int size){
    for (int i = 0; i < size; i++)
    {for (int j=0; j<2 ;j++){
        cout<<" vetrex["<<i<<" ] ["<<j<<"] = ";
        cout<<array[i][j]<<"\n";

    }
    
}}
// ريم عماد أسود
void input_array_ver(int array[100],int size){
    for (int i = 0; i < size; i++){
        cout<<"enter vetrex["<<i<<" ] = ";
        cin>>array[i];

    }
    
}
// ديمة وائل أسعد
void output_array_ver(int array[100],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<" vetrex["<<i<<" ] =";
        cout<<array[i]<<"\n";
        

    }
    
}
// آية ياسر عيسى
int top (int array[100],int SizeArray){
    return array[SizeArray];
}
// enum state{new ,active ,finish};
string state[3]={"new","active","finish"};
  vector<int> ostack(10);
  vector<int> rstack(10);
  string state_vetrex[1000];int array_vertex[1000];
  int dfs_counter=1;int dfsNum[1000],comp[1000];
//   سلمان فرج علي
void Intital(int SizeArray){
  for (int i = 0; i < SizeArray; i++)
  {
    state_vetrex[i]=state[0];
    dfsNum[i]=-1;
    comp[i]=-1;
  }}
  void dfs(int vertex){
    state_vetrex[vertex]="active";
    dfsNum[vertex]=dfs_counter;
    dfs_counter++;
    ostack.push_back(array_vertex[vertex]);
    rstack.push_back(array_vertex[vertex]);
  }
//   غدير اسامة حسن
void Implemention(int array_vertex[1000],int SizeArray_ver){
    Intital(SizeArray_ver);
    for (int i = 0; i < SizeArray_ver; i++)
    {
        if (state_vetrex[i]=="new")
        dfs(i);
    }
   
        }
        // مريم حسن ديوب
void Implemention_Edge(int array_edge[][2],int SizeArray_edg){
    for(int i=0; i<SizeArray_edg;i++){
        for(int j=0;j<SizeArray_edg;j++){
            if (state_vetrex[j]=="new"){
                 dfs(j);
            }
             while (j ==ostack[j] && j!=0) {
            while (dfsNum[j]<dfsNum[rstack[10]]){
                rstack.pop_back();
            }
            // لجين أحمد علي
    state_vetrex[i]="finish";
    if(array_vertex[i]==top(array_vertex,SizeArray_edg)){
        rstack.pop_back();
    }
    while(array_vertex[i]!=array_vertex[j]){
        ostack.pop_back();
        comp[j]=array_vertex[i];
    }

 }}}}
//  مريم سمير قاسم
int main(){
    int size_Arr;
    int array_ve[100];
   int array_ver[100][2];
   cout<<"Enter number of vetrex =";
   cin>>size_Arr;

   input_array_ver(array_ve,size_Arr);
   output_array_ver(array_ve,size_Arr);
   input_array_ed(array_ver,size_Arr);
   output_array_ed(array_ver,size_Arr);
   Intital(size_Arr);
   Implemention(array_ve,size_Arr);
   Implemention_Edge(array_ver,size_Arr);
   output_array_ver(array_ve,size_Arr);
   for(int i=0;i<size_Arr;i++){
    dfs(array_vertex[i]);
    if(state_vetrex[i]=="new"){
        cout<<"not 2-edge vertex\n";
    }
    else if(state_vetrex[i]=="active")
    {
        cout<<"2-edge connected graph but not 2-connected graph\n";
    }
    else{
        cout<<"2-connected graph\n";
    }
   }
    return 0;
    
}