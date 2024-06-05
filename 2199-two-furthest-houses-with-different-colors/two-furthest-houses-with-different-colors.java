class Solution {
    public int maxDistance(int[] colors) {
        int maxDistance = 0;
        for(int i=0;i<colors.length-1;i++){
            for(int j=i+1;j<colors.length;j++){
                if(colors[j]!=colors[i]){
                    maxDistance = Math.max(maxDistance,Math.abs(j-i));
                }
            }
        }
        return maxDistance;
    }
}