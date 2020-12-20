#include<stdio.h>
#include<stdlib.h>

typedef struct Edge{      //defining a structure edge having source and destination vertex //along with its weight    
	int src;
	int dest;
	int weight;
}Edge;

int* sort_asc(Edge *input,int m){				//using bubble sort to sort all        //edges in ascending order of edge weights
	for(int i=0; i<m; i++){
		for(int j=i; j<m; j++){
			if(input[i].weight>input[j].weight){
				Edge e;
				e = input[i];
				input[i] = input[j];
				input[j] = e;
			}
		}
	}
	return input;
}

int findParent(int vertex, int parent[]){		//function to find the parent of a vertex
	if(parent[vertex]==vertex){
		return vertex;
	}
	return findParent(parent[vertex],parent);
}

int Kruskal(Edge *input,int n, int m){
	sort_asc(input,m);		   //sort all edges based on ascending order of weights
	
	Edge MST[n-1];				//Form MST based on Kruskal's algo
	int parent[n];
	for(int i=0; i<n; i++){					
		parent[i]=i;
	}

	int j=0,count=0;
	while(count != (n-1)){	     //add edge to output if it does not form a cycle
		Edge curr = input[j];
		int srcParent = findParent(curr.src,parent);
		int destParent = findParent(curr.dest,parent);
		
		if(srcParent != destParent){
			MST[count] = curr;
			count++;
			parent[srcParent] = destParent;
		}
		j++;
	}

	int result=0;				//sum all weights of the MST edges 
	for(int i=0; i<n-1; i++){
		result = result + MST[i].weight;
	}
	return result;
}

int main(){
	int n=0,m=0,result=0;					
	scanf("%d %d",&n,&m);
	Edge input[m];
	for(int i=0; i<m; i++){
		int s,d,w;
		scanf("%d %d %d",&s,&d,&w);
		input[i].src = s;
		input[i].dest = d;
		input[i].weight = w;
	}
	
	result = Kruskal(input,n,m);		//call Kruskal's fumction on the input graph 
	printf("%d\n",result);
	return 0;
}
