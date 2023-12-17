public class Info{
    String food,cus;
    Integer r;
    public Info(String food,String cus,Integer r){
        this.food=food;
        this.cus=cus;
        this.r=r;
    }
}
class FoodRatings {
    Comparator<Info> cp=new Comparator<Info>(){
        @Override
        public int compare(Info a,Info b){
            int res = b.r-a.r;
            if(res==0) return a.food.compareTo(b.food);
            return res;
        }
    };
    Map<String,Info> ftc=new HashMap<>();
    Map<String,PriorityQueue<Info>> ctf=new HashMap<>();
    public FoodRatings(String[] foods, String[] cuisines, int[] ratings) {
        int n=foods.length;
        for(int i=0;i<n;++i){
            String food=foods[i];
            String cuisine=cuisines[i];
            Integer rating=ratings[i];
            Info cmb=new Info(food,cuisine,rating);
            ftc.put(food,cmb);
            ctf.putIfAbsent(cuisine,new PriorityQueue<Info>(this.cp));
            ctf.get(cuisine).add(cmb);
        }
    }
    
    public void changeRating(String food, int newRating) {
        Info prev=ftc.get(food);
        Info curr=new Info(food,prev.cus,newRating);
        ftc.put(food,curr);
        prev.food="";
        ctf.get(prev.cus).add(curr);
    }
    
    public String highestRated(String cuisine) {
        PriorityQueue<Info> pq=ctf.get(cuisine);
        String food=pq.peek().food;
        while(food.equals("")){
            pq.poll();
            food=pq.peek().food;
        }
        return pq.peek().food;
    }
}

