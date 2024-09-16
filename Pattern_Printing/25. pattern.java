
class HelloWorld {
    public static void main(String[] args) {
        int n = 6;
        for(int i=0;i<(n*2)-1;i++){
            for(int j=0;j<(n*2)-1;j++ ){
                int a=i,b=j;
                if(a>(n-1)) a = (n-1)-(a - (n-1));
                if(b>(n-1)) b = (n-1)-(b - (n-1));
                int mini = a>b?b:a;
                System.out.print(n-mini+" ");
            }
            System.out.println();
        }
    }
}
