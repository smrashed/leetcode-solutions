public class Solution {
    
     public void BackTrack( IList<IList<int>> result,IList<int> ans, int n, int k,int i)
    {
        if(i > n + 1) return;
        
        if(ans.Count == k)
        {
            result.Add(ans);
        }
        else
        {
            ans.Add(i);
            BackTrack(result,new List<int>(ans),n,k,i+1);
            ans.RemoveAt(ans.Count -1);
            BackTrack(result,new List<int>(ans),n,k,i+1);
        }
    }
    
    
    public IList<IList<int>> Combine(int n, int k) {
        IList<IList<int>> result = new List<IList<int>>();
        
        BackTrack(result,new List<int>(),n,k,1);
        
        return result;
    }
}