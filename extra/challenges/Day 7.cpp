#include <iostream>
#include<vector>
#include<queue>

using namespace std;

vector<string> color;
void addEdge(vector <int> graph[],int u,int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void BFS(vector <int> graph[],int s)
{
    queue<int>q;
    q.push(s);

    color[s] = "Grey";

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout<< u <<" ";

        for(auto i = graph[u].begin(); i != graph[u].end();i++)
        {
            if(color [*i] == "White")
            {
                color[*i] = "Grey";
                q.push(*i);
            }

        }
        color[u] = "Black";
    }

}

 int main()
 {  int n,e,s;
    cout << "Enter the number of nodes :";
    cin >> n;
    cout << "Enter the number of Edges : ";
    cin >> e;
    cout <<"Enter the source node :";
    cin >> s;
    color.assign(n,"White");

    vector<int>graph[n];

    cout << "Enter the start & end vertex of each edge \n";

    int u,v;
    for(int i = 0;i < e;i++)
    {
        cin >> u;
        cin >> v;
        addEdge(graph,u,v);
        cout <<"\n";
    }

    for(int i = 0;i < n;i++)
    {
        if(color[i] =="White")
            BFS(graph,s);
    }
    return 0;
 }
