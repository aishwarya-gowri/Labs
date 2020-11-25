# Linear Regression

##### reading inputs
x <- c(50,53,54,55,56,59,62,65,67,72,72,74,75,76,79)

y <- c(122,118,128,121,125,136,144,142,149,161,167,168,162,171,175)


##### correlation co-efficient(gives the strength of the relationship between the relative movements of two variables)
cor(x,y)


##### lm() is used to fit linear model
relation <- lm(y~x)

class(relation)

summary(relation)


##### lists the components of linear regression
names(relation)


##### to find the coefficients of the relation that for the equation y=mx+c
relation$coefficients
### or ####
coef(relation)


##### plotting x,y,values
plot(x,y,col="red",xlab="Temperature",ylab="Yield",pch=20,cex=2.0)
#plotting the fitted line
abline(coef(relation),col="blue")

##### plotting values and fitted line with a single line code
>plot(x,y,col="red",main = "Temparature and yield", abline(lm(y~x)),cex= 1.3,pch=16,xlab="Temparature",ylab="Yield")

### Output
![ss1](https://github.com/aishwarya-gowri/Labs/blob/master/DSR/lab9/Output/Temperature_Data_LinearRegression_Output.png)
