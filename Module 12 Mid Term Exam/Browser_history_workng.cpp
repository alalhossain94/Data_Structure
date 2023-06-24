#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string>web_addresses;

    while(true)
    {
        string  address;
        cin>>address;
        if(address == "end" )
        {
            break;
        }
        web_addresses.push_back(address);
    }
    int Q;
    cin>>Q;
    cin.ignore();
    auto tmp=web_addresses.begin();
    for(int i=0; i<Q; i++)
    {
        string command;
        cin>>command;
        {
            if(command == "visit")
            {
                string visit_address;
                cin>>visit_address;
                auto it = find(web_addresses.begin(), web_addresses.end(), visit_address);
                if(it != web_addresses.end())
                {
                    tmp=it;
                    cout<<*tmp<<endl;
                }
                else
                {
                    cout<<"Not Available"<<endl;
                }

            } 
            else if (command == "next")
            {
                tmp++;
                if(tmp != web_addresses.end())
                {
                    cout<<*tmp<<endl;
                }
                else
                {
                    tmp--;
                    {
                        cout<<"Not Available"<<endl;
                    }
                }
            }
            else if(command == "prev")
            {
                if(tmp != web_addresses.begin())
                {
                    tmp--;
                    cout<<*tmp<<endl;
                }
                else
                {
                    cout<<"Not Available"<<endl;
                }
            }
        }

    }
    return 0;
}