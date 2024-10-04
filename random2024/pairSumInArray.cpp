// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int inpArr[] = {3, 4, 2, 7, 8, 3, 6};
    int targetValue = 13, inpArrLen = 7, tempValue = 0, i;
    map<int, string> uniqueValues;
    bool resultFlag = false;
    
    for(i=0; i<inpArrLen; i++){
        tempValue = targetValue - inpArr[i];
        if(uniqueValues.find(tempValue) != uniqueValues.end()){
            resultFlag = true;
            break;
        }
        uniqueValues[inpArr[i]] = "X";
    }
    
    if(resultFlag){
        cout<<"OK | "<<inpArr[i]<<" + "<<tempValue<<" = "<<targetValue<<endl;
    }else{
        cout<<"NOT OK"<<endl;
    }
    
    return 0;
}
/*

<?php

$inp_arr = [3, 4, 2, 7, 8, 3, 6];
$target_value = 13; 
$unique_values = [];
$temp_value = 0;
$result_flag = false;
for($i = 0; $i < count($inp_arr); $i++){
    $temp_value = $target_value - $inp_arr[$i];
    if(isset($unique_values[$temp_value])){
        $result_flag = true;
        break;
    }
    $unique_values[$inp_arr[$i]] = 'X';
}

echo $result_flag ? "OK | {$inp_arr[$i]} + $temp_value = $target_value" : "NOT OK";

?>

*/