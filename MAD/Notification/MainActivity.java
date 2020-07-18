package com.example.labprograms.lab9;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.content.Context;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.NotificationCompat;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {
    private EditText message;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        message = findViewById(R.id.message);
        Button buttonNotify = findViewById(R.id.buttonNotify);
        buttonNotify.setOnClickListener(this);
    }

    @Override
    public void onClick(View v) {
        String notificationChannelId = "channel_id";
        NotificationManager notificationManager = (NotificationManager) getSystemService(Context.NOTIFICATION_SERVICE);
        NotificationChannel notificationChannel = new NotificationChannel(notificationChannelId, "channel_name", NotificationManager.IMPORTANCE_DEFAULT);

        if (notificationManager != null) {
            notificationManager.createNotificationChannel(notificationChannel);
            NotificationCompat.Builder notificationBuilder = new NotificationCompat.Builder(this, notificationChannelId);
            notificationBuilder
                    .setAutoCancel(true)
                    .setDefaults(Notification.DEFAULT_ALL)
                    .setWhen(System.currentTimeMillis())
                    .setSmallIcon(R.mipmap.ic_launcher)
                    .setContentTitle("New Message")
                    .setContentText(message.getText().toString());

            notificationManager.notify(1, notificationBuilder.build());
        } else {
            Toast.makeText(this, "Unable to create notification channel.", Toast.LENGTH_LONG).show();
        }
    }
}