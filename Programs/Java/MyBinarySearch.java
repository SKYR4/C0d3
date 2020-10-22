public class MyBinarySearch {
    private int[] arr;

    public MyBinarySearch(int[] arr){
        this.arr = arr;
    }
    public boolean binarySearch(int searchElement){
        boolean response = false;
        int low = 0;
        int high = arr.length -1;
        while(low <= high){
            int mid = (low + high) /2;
            if(searchElement == arr[mid]){
                response = true;
                break;
            }
            else if(searchElement < arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid +1;
            }
        }
        return response;
    }

    public static void main(String[] args) {
        int[] sortedArray = {10, 20, 30, 40, 50, 60, 70};
        MyBinarySearch object = new MyBinarySearch(sortedArray);
        boolean result = object.binarySearch(100);
        if(result){
            System.out.println("element found");
        }
        else {
            System.out.println("element not found");
        }
    }
}
