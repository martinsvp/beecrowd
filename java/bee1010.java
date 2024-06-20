import java.util.Scanner;

public class bee1010 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        final int MAX_REQUEST = 2;
        
        Request[] requests = new Request[MAX_REQUEST];
        
        for(int i = 0; i < requests.length; i++) {
            int code = input.nextInt();
            int amount = input.nextInt();
            double unitPrice = input.nextDouble();
            
            requests[i] = new Request(code, amount, unitPrice);
        }
        
        double total = getTotal(requests);
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
        
        input.close();
    }
    
    public static double getTotal(Request[] requests) {
        double total = 0;
        for(Request request: requests) {
            total += request.getTotalPrice();
        }
        
        return total;
    }
}

class Request {
    int code;
    int amount;
    double unitPrice;
    
    Request(int code, int amount, double unitPrice) {
        this.code = code;
        this.amount = amount;
        this.unitPrice = unitPrice;
    }
    
    double getTotalPrice() {
        return amount * unitPrice;
    }
}