package com.example.form;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;


public class SecondActivity extends AppCompatActivity  {
    TextView t1,t2,t3;
    String name,usn,dept;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);

        t1 = (TextView) findViewById(R.id.textView1);
        t2 = (TextView) findViewById(R.id.textView2);
        t3 = (TextView) findViewById(R.id.textView3);

        Intent i = getIntent();

        name = i.getStringExtra("name");
        usn = i.getStringExtra("usn");
        dept = i.getStringExtra("dept");

        t1.setText(name);
        t2.setText(usn);
        t3.setText(dept);


    }

}
