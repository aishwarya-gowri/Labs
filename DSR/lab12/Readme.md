# Matplot and multivariate

## Code

```
sfly<-c(26,23,33,6,3,4,20,2)
mfly<-c(4,5,12,9,15,10,8,22)
speed<-c(3,4,4,5,6,7,7,9)
ivert<-cbind(sfly,mfly)
dim(ivert)
ivert
spd<-cbind(speed)
spd
dim(spd)
ivert
matplot(spd,ivert,type='b',pch=c(2,3),col=c(2,3),xlab='Speed',ylab='Invertebrate')
legend(x='topright',legend=c('Stonefly','Mayfly'),col=c(2,3),pch=2:3,lty=5:3)
```


## Output
![output](https://github.com/aishwarya-gowri/Labs/blob/master/DSR/lab12/Matplot%20Output.png)
