class Solution {
public:
    string intToRoman(int num) {
        string rm[] = {"","I","II","III","IV","V","VI","VII","VIII","IX","X"};
        string answer = "";
        int m = num/1000; for(int i=0;i<m;i++) answer += "M"; num = num%1000;
        if(num/900!=0) answer += "CM"; num = num%900;
        int d = num/500; for(int i=0;i<d;i++) answer += "D"; num = num%500;
        if(num/400!=0) answer += "CD"; num = num%400;
        int c = num/100; for(int i=0;i<c;i++) answer += "C"; num = num%100;
        if(num/90!=0) answer += "XC"; num = num%90;
        int l = num/50; for(int i=0;i<l;i++) answer += "L"; num = num%50;
        if(num/40!=0) answer += "XL"; num = num%40;
        int x = num/10; for(int i=0;i<x;i++) answer += "X"; num = num%10;
        if(num) answer += rm[num];
        return answer;
    }
};
