package com.example.form;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.content.Intent;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;

public class MainActivity extends AppCompatActivity {

    EditText e1,e2;
    Button bt;
    Spinner s;

    String[] dept = {"CSE","ISE","ECE","CIVIL"};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        e1 = (EditText) findViewById(R.id.editText);
        e2 = (EditText) findViewById(R.id.editText2);

        bt = (Button) findViewById(R.id.button);
        s = (Spinner) findViewById(R.id.spinner);

        ArrayAdapter adapter = new ArrayAdapter(MainActivity.this,android.R.layout.simple_spinner_item,dept);
        s.setAdapter(adapter);

        bt.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i = new Intent(MainActivity.this,SecondActivity.class);

                i.putExtra("name",e1.getText().toString());
                i.putExtra("usn",e2.getText().toString());
                i.putExtra("dept",s.getSelectedItem().toString());

                startActivity(i);

            }
        });


    }
}


