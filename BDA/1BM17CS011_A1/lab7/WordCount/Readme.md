# Word Count Program

###### go to hadoop user
>su hduser


###### create a hadoop classpath 
>export HADOOP_CLASSPATH=$(hadoop classpath)


###### check for the hadoop variable value
>echo $HADOOP_CLASSPATH

###### Output
>/usr/local/hadoop/etc/hadoop:/usr/local/hadoop/share/hadoop/common/lib/*:/usr/local/hadoop/share/hadoop/common/*:/usr/local/hadoop/share/hadoop/hdfs:/usr/local/hadoop/share/hadoop/hdfs/lib/*:/usr/local/hadoop/share/hadoop/hdfs/*:/usr/local/hadoop/share/hadoop/yarn/lib/*:/usr/local/hadoop/share/hadoop/yarn/*:/usr/local/hadoop/share/hadoop/mapreduce/lib/*:/usr/local/hadoop/share/hadoop/mapreduce/*:/usr/local/hadoop/contrib/capacity-scheduler/*.jar


###### create a wordcount folder in hadoop directory
>hadoop fs -mkdir /WordCount


###### create a input folder under wordcount directory
>hadoop fs -mkdir /WordCount/Input


###### put the input text file from local machine to hadoop directory
>hadoop fs -put '/home/aishwarya/Desktop/Hadoop/WordCount/input_data/input.txt' /WordCount/Input


###### execute the WordCount.java
>javac -classpath ${HADOOP_CLASSPATH} -d '/home/aishwarya/Desktop/Hadoop/WordCount/Word_count_classes' '/home/aishwarya/Desktop/Hadoop/WordCount/WordCount.java'


###### create a jar file
>jar -cvf WordCountHadoopProgram.jar -C Word_count_classes/ .


###### view the output file
>hadoop dfs -cat /WordCount/Output/*



## Input data

```
hi how are you
how is your job
how is your family
how is your brother
how is your sister

```

## Output data

```
are	1
brother	1
family	1
hi	1
how	5
is	4
job	1
sister	1
you	1
your	4

```
