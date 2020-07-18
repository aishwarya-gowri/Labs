package com.example.labprograms.lab6;

import androidx.appcompat.app.AppCompatActivity;


import android.app.AlertDialog;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {
    DataBaseHelper myDb;
    EditText name_txt,marks_txt,id_txt;
    Button insert_btn,display_btn,update_btn,delete_btn;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        myDb = new DataBaseHelper(this);
        id_txt=(EditText)findViewById(R.id.Rollno);
        name_txt=(EditText)findViewById(R.id.Name);
        marks_txt=(EditText)findViewById(R.id.Marks);

        insert_btn = (Button) findViewById(R.id.Insert);
        display_btn = (Button) findViewById(R.id.View);
        update_btn = (Button) findViewById(R.id.Update);
        delete_btn = (Button) findViewById(R.id.Delete);

        insert_btn.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                if (v.getId() == R.id.Insert)
                {
                    myDb.insert_record(Integer.parseInt(id_txt.getText().toString()),name_txt.getText().toString(),
                            Integer.parseInt(marks_txt.getText().toString()));
                    showMessage("Success", "Record added");
                    clearText();
                }

                }
        });
        display_btn.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                if (v.getId() == R.id.View)
                {
                    StringBuffer record_details=(StringBuffer)myDb.display_all_records();
                    showMessage("Display Status",record_details.toString());
                }

            }
        });
        update_btn.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                if (v.getId() == R.id.Update)
                {
                    myDb.update_record(Integer.parseInt(id_txt.getText().toString()),Integer.parseInt(marks_txt.getText().toString()));
                    showMessage("Success","Record Updated");}

            }
        });
        delete_btn.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                if (v.getId() == R.id.Delete) {
                    myDb.delete_record(Integer.parseInt(id_txt.getText().toString()));
                    showMessage("Success", "Record Deleted");
                }

            }
        });

    }
    public void showMessage(String title, String message) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setCancelable(true);
        builder.setTitle(title);
        builder.setMessage(message);
        builder.show();
    }
    public void clearText() {
        name_txt.setText("");
        id_txt.setText("");
        marks_txt.setText("");
    }
}
