class Solution {
public:
	int GetRoot(int i,vector<int>& V,vector<int>& R){
		if(V[i]==i) return i;
		int temp_par=V[i];
		V[i]=GetRoot(temp_par,V,R);
		R[i]=(R[i]+R[temp_par])%2;
		return V[i];
	}
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        int Length = dislikes.size();
        vector<int> Parent;
        vector<int> Relation;
        for(int i=0;i<=N;i++){
        	Parent.push_back(i);
        	Relation.push_back(0);
        }
        for(int i=0;i<Length;i++){
        	int i1=dislikes[i][0],i2=dislikes[i][1];
        	int par1=GetRoot(i1,Parent,Relation),par2=GetRoot(i2,Parent,Relation);
        	if(par1!=par2){
        		Parent[max(par1,par2)]=min(par1,par2);
        		Relation[max(par1,par2)]=(1+Relation[i1]+Relation[i2])%2;
        	}
        	else{
        		if(Relation[i1]==Relation[i2]){
        			return false;
        		}
        	}
        }
        return true;
    }
};
