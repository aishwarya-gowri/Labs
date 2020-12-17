# Hadoop Average Temperature Program

### shift to hadoop user(Here hduser)
>su hduser


### start hadoop server
>start-dfs.sh

>start_yarn.sh


### check if all nodes are running
>jps


### Create a averageTemperature folder locally and create one folder for input and one for class files.


### create a variable for hadoop classpath
>export HADOOP_CLASSPATH=$(hadoop classpath)


### create a directory in the hadoop sever
>hadoop fs -mkdir /AverageTemperature


### create a input directory under averageTemperature
>hadoop fs -mkdir /AverageTemperature/Input


### shift to the local AverageTemperature Directory where input and java files are stored
>cd Desktop/Hadoop/averageTemperature

### add the input file from local repository to the hdfs 
>hadoop fs -put '/home/aishwarya/Desktop/Hadoop/averageTemperature/input_data/input.txt' /AverageTemperature/Input

### compile the java files
>sudo javac -classpath ${HADOOP_CLASSPATH} -d '/home/aishwarya/Desktop/Hadoop/averageTemperature/average_temperture_classes' '/home/aishwarya/Desktop/Hadoop/averageTemperature/AverageDriver.java' '/home/aishwarya/Desktop/Hadoop/averageTemperature/AverageReducer.java' '/home/aishwarya/Desktop/Hadoop/averageTemperature/AverageMapper.java'


### create a jar file(compressed zip file)
>jar -cvf averageTemperature.jar -C average_temperature_classes/ .


### run the hadoop comand to execute the jar file and provide the inputfile and output file location in the hadoop sever
> hadoop jar '/home/aishwarya/Desktop/Hadoop/averageTemperature/averageTemperature.jar' AverageDriver /AverageTemperature/Input /AverageTemperature/Output


#### Output
>1901 46 [when the mapper file was looking for the + sign in the input file]

>1901 93 [- sign]
