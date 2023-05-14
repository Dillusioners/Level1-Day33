/**
 * Author - Debag101
 * Purpose - Finding out number of vowels in string
 * Date - 14 - 5 - 2023
*/

//importing the IO package for input classes 
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;

//Creating class
public class VowelCounter {

	//Main method starts 
	public static void main(String[] args)throws IOException {
		VowelCounter methodCaller = new VowelCounter(); //Creating object of class
		BufferedReader rd = new BufferedReader(new InputStreamReader(System.in)); // Creating buffer obj

		System.out.println(">> Enter the string => ");
		//Getting the string
		String inputStr = rd.readLine();
		//Printing result
		System.out.printf("\nThere are %d vowels in the string ", methodCaller.v_counter(inputStr, inputStr.length()));
	}
	//v_counter that returns the number of vowels
	int v_counter(String str, int size) {
		int counter = 0;//Initializing the counter
		for(char c : str.toCharArray()) {
			//If char in string is vowel
			if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
				++counter; // Incrementing counter
		}
		return counter;
		//Returning counter
	}
}