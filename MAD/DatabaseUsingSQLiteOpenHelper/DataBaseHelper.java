package com.example.labprograms.lab6;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

import androidx.annotation.Nullable;

public class DataBaseHelper extends SQLiteOpenHelper {
    public static final String DATABASE_NAME="department.db";
    public static final String TABLE_NAME="student_table";
    public static final String COL_1="ID";  public static final String COL_2="Name";
    public static final String COL_3="Marks";
    SQLiteDatabase db;

    public DataBaseHelper(@Nullable Context context){
        super(context, DATABASE_NAME, null, 1);
        db=this.getWritableDatabase();
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        String sql_query="create table if not exists "+ TABLE_NAME +
                "(ID INTEGER PRIMARY KEY, Name TEXT, Marks  INTEGER)";
        db.execSQL(sql_query);
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        db.execSQL("DROP TABLE IF EXISTS student_table"+ TABLE_NAME);
        onCreate(db);

    }
    public void insert_record(int id,String name, int marks){
        //String query="INSERT INTO student_table (Name, Marks)
//               VALUES ('"+name+"',"+marks+");";
        String query="INSERT INTO student_table VALUES("+id+", '"+name+"',"+marks+");";
        db.execSQL(query);
        }

    public StringBuffer display_all_records()
    {
        StringBuffer buffer=new StringBuffer();
        Cursor c=db.rawQuery("SELECT * FROM student_table", null);
        if(c.getCount()==0)
        {
            buffer.append("Error"+ "No records found");
            return(buffer);
        }
        while(c.moveToNext())
        {
            buffer.append("ID: "+c.getString(0)+"\n");
            buffer.append("Name: "+c.getString(1)+"\n");
            buffer.append("Marks: "+c.getString(2)+"\n\n");
            }
        return(buffer);
    }
    public void update_record(int id, int marks)
    {
        String query="UPDATE student_table SET Marks="+marks+" WHERE ID="+id+";";
        db.execSQL(query);
    }
    public void delete_record(int id)
    {
        String query="DELETE FROM student_table WHERE ID="+id+";";
        db.execSQL(query);
    }



}
