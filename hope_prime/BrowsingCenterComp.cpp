#include<bits/stdc++.h>
using namespace std;

int tomin( string &t)
{
    stringstream ss(t);
    string hour,min;
    getline(ss,hour,':');
    getline(ss,min,':');
    
    
    int hours=stoi(hour);
    int mins=stoi(min);
    
    return hours*60+mins;
}


int main() {
    
    int n;
    cin>>n;
    cin.ignore();
    vector<int>start,end1;
    
    for(int ctr=1;ctr<=n;ctr++)
    {
        string line;
        getline(cin,line);
        
        stringstream ss(line);
        string slot;
        vector<string>slots;
        
        while(ss>>slot)
        {
            slots.push_back(slot);
        }
        
        if(slots.size()==2)
        {
            int startT=tomin(slots[0]);
            int endT=tomin(slots[1]);
            
            start.push_back(startT);
            end1.push_back(endT);
        }
    }
            
    int comp=0;
    int i=0;
    int j=0;
    sort(start.begin(),start.end());
    sort(end1.begin(),end1.end());
    while(i<start.size() && j<end1.size())
    {
        comp=max(comp,(i-j)+1);
        
        if(start[i]<end1[j])
        {
            i++;
        }
        else
        {
            j++;
        }
        
        while(i<start.size() && j<end1.size() && start[i]>=end1[j])
        {
            j++;
        }
    }
    cout<<comp;
}

// //

// 3
// 09:00 10:30
// 10:00 11:30
// 11:00 12:00



// //