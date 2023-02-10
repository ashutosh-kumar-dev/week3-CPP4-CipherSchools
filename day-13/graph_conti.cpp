#include<bits/stdc++.h>

using namespace std;
void operate(vector<vector<int>>&g, int v){ vector<bool>vis(v,0);

bool f = 0;

for(int i=0;i<v;i++){ if(!vis[i]){ if(have_cycle(g,i,v)){ cout<<"Have cycle"<<endl;

f = 1;

break;

}

}

}

if(!f){

cout<<"Cycle not present.!"<<endl;

}

bool have_cycle (vector<vector<int>>&g, int src, int v,int p,vector<bool>&vis) {

vis[src] = 1;

// cout<<"in have cycle"<<endl;

for (int i = 0;i<v;i++){

if(g[src][i] == 1){

if(vis[i] && i!=p) return 1; if(!vis[i] && have_cycle(g,i,v,src,vis)) return 1;

}

}

return 0;

}
