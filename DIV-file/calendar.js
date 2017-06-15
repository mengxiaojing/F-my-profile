/**
 * Created by mxj on 2016/1/5.
 */
var times=process.argv.splice(2),
    date=new Date(),
    Tyear=date.getFullYear(),
    arr=["日","一","二","三","四","五","六"],
    Tmonth=date.getMonth();
    console.log(times)
if(times==""){
    eachDay(Tyear,Tmonth+1);
}else{
   var date2=new Date(times[0],times[1]),
       year=date2.getFullYear(),
       month=date2.getMonth();
    eachDay(year,month);
}
//判断该月共有多少天
function sumDay(y,m){
    if(m==0){
        y=y-1;
        m=12;
    }
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        return 31;
    }else if(m==4 || m==6 || m==9 || m==11){
        return 30;
    }else{
        if(y%400==0 || (y%4==0 && y%100!=0)){
            return 29;
        }else{
            return 28;
        }
    }
}
//遍历
function eachDay(y,m){
    var maxDay=sumDay(y,m),
        day=new Date(y,m-1).getDay();
        str="",
        dates="";
    for(var i=0;i<arr.length;i++){
        str+=arr[i]+" ";
    }
    console.log(str);
    if(day==0){
        dates+="\n";
    }else{
        for(var i=0;i<day;i++){
            dates+="   ";
        }
    }
    for(var i=1;i<=maxDay;i++){
        if((i+day)%7==0){
            dates+=addZero(i)+"\n";
        }else{
            dates+=addZero(i)+" ";
        }
    }
    console.log(dates);
}
function addZero(n){
    if(n<10)return  " "+n ;
    return n;
}