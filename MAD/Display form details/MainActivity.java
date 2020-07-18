package com.example.labprograms.lab2;

import androidx.appcompat.app.AppCompatActivity;
import android.view.View;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.TextView;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;
import android.content.Intent;

public class MainActivity extends AppCompatActivity {

    EditText e1,e2;
    Spinner s1;
    Button b1;
    String[] depts={"CSE","ISE","ECE","IT","MECH","Civil"};
    String name,reg,dept;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        e1= (EditText) findViewById(R.id.editText);
        e2= (EditText) findViewById(R.id.editText2);
        b1= (Button) findViewById(R.id.button);
        s1= (Spinner) findViewById(R.id.spinner);

        ArrayAdapter adapter=new ArrayAdapter(MainActivity.this,R.layout.support_simple_spinner_dropdown_item,depts);
        s1.setAdapter(adapter);
        b1.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view)
            {
                    name=e1.getText().toString();
                    reg=e2.getText().toString();
                    dept=s1.getSelectedItem().toString();

                    Intent i= new Intent(MainActivity.this,SecondActivity.class);
                    i.putExtra("name_key",name);
                    i.putExtra("reg_key",reg);
                    i.putExtra("dept_key",dept);

                    startActivity(i);
            }


        });

    }
}
