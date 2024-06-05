class Solution {
    public int maxDistance(int[] colors) {
        int maxDistance = 0;
        int startHouseColour = colors[0];
        int endHouseColour = colors[colors.length-1];
        for(int i=1;i<colors.length;i++){
            if(colors[i]!=startHouseColour){
                maxDistance = i;
            }    
        }
        for(int i=colors.length-1;i>=0;i--){
            if(colors[i]!=endHouseColour){
                maxDistance = Math.max(maxDistance,Math.abs(colors.length-i-1));
            }
        }
        return maxDistance;
    }
}