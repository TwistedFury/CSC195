package com.example.l1_madlibs;

import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });
    }

    public void onDone(View v) {
        /* Call all text boxes , it's a lot; stay with me */
        EditText animal = findViewById(R.id.animal);
        EditText foodOne = findViewById(R.id.foodOne);
        EditText nounOne = findViewById(R.id.nounOne);
        EditText verbOne = findViewById(R.id.verbOne);
        EditText verbTwo = findViewById(R.id.verbTwo);
        EditText verbThree = findViewById(R.id.verbThree);
        EditText verbFour = findViewById(R.id.verbFour);
        EditText nounTwo = findViewById(R.id.nounTwo);
        EditText locationOne = findViewById(R.id.locationOne);
        EditText nounThree = findViewById(R.id.nounThree);
        EditText nounFour = findViewById(R.id.nounFour);
        EditText locationTwo = findViewById(R.id.locationTwo);
        EditText verbFive = findViewById(R.id.verbFive);
        EditText foodTwo = findViewById(R.id.foodTwo);
        EditText gameOne = findViewById(R.id.gameOne);
        EditText verbSix = findViewById(R.id.verbSix);
        EditText nounFive = findViewById(R.id.nounFive);
        EditText nounSix = findViewById(R.id.nounSix);
        EditText pluralOne = findViewById(R.id.pluralNounOne);
        EditText verbING = findViewById(R.id.verbInING);
        EditText verbSeven = findViewById(R.id.verbSeven);
        EditText pluralTwo = findViewById(R.id.pluralNounTwo);
        EditText verbEight = findViewById(R.id.verbEight);
        EditText verbNine = findViewById(R.id.verbNine);

        /* Pull text info and assign to variables , another long one */
        String animalText = animal.getText().toString();
        String foodOneText = foodOne.getText().toString();
        String nounOneText = nounOne.getText().toString();
        String verbOneText = verbOne.getText().toString();
        String verbTwoText = verbTwo.getText().toString();
        String verbThreeText = verbThree.getText().toString();
        String verbFourText = verbFour.getText().toString();
        String nounTwoText = nounTwo.getText().toString();
        String locationOneText = locationOne.getText().toString();
        String nounThreeText = nounThree.getText().toString();
        String nounFourText = nounFour.getText().toString();
        String locationTwoText = locationTwo.getText().toString();
        String verbFiveText = verbFive.getText().toString();
        String foodTwoText = foodTwo.getText().toString();
        String gameOneText = gameOne.getText().toString();
        String verbSixText = verbSix.getText().toString();
        String nounFiveText = nounFive.getText().toString();
        String nounSixText = nounSix.getText().toString();
        String pluralOneText = pluralOne.getText().toString();
        String verbINGText = verbING.getText().toString();
        String verbSevenText = verbSeven.getText().toString();
        String pluralTwoText = pluralTwo.getText().toString();
        String verbEightText = verbEight.getText().toString();
        String verbNineText = verbNine.getText().toString();

        /* Story: from http://blog.playdrhutch.com/2014/01/16/give-mad-lib/
            If you give a *animal* a *food*, he/she is going to ask for a *noun*.
            When you give him/her the *last noun*, he/she will want to *verb*.
            When he/she is finished, he/she will *verb*.
            Then he/she will *verb* and *verb* to the *noun*.!!!!
            Since that doesn't work out, he/she will want to go to the *location*.
            On the way, he/she will see a *noun* and will want *noun*.
            Then you will have to take him/her to the *location*. He/She will *verb*.!!!!
            When he/she is done, he/she will ask for some *food*. On the way home
            he/she will start a game of *game*. When you finally get home, you'll have
            to *verb*. Then he/she will want a *noun*. You'll have to find a *noun*!!!!!
            and *plural noun*. When he/she sees the *last noun*, he/she will start
            *verb ending in -ing*.!!!
            Then he/she will *verb* out of *plural noun*. Of course, when he/she is finished,
            he/she will want to *verb*. So, he/she will ask for a *first noun*. And chances are
            if you give him/her a *first noun*, he/she is going to want a *first food*.
         */

        /* In total, one animal, two foods, six nouns, nine verbs, two locations, one game, two plural
           nouns, one verb ending in -ing */

        /* Concatenation Time */
        String whyDoIPutMyselfThroughThis = "If you give a(n) " + animalText + " a(n) " + foodOneText + ", he/she is going to ask for a(n) " + nounOneText +
                ". When you give him/her the " + nounOneText + ", he/she will want to " + verbOneText + ". When he/she is finished, he/she will " + verbTwoText +
                ". When he/she is finished, he/she will " + verbThreeText + ". Then he/she will " + verbFourText + " and " + verbFiveText + " to the " + nounTwoText +
                ". Since that doesn't work out, he/she will want to go to (the) " + locationOneText + ". On the way, he/she will see a(n) " + nounThreeText +
                " and will want a(n) " + nounFourText + ". Then you will have to take him/her to (the) " + locationTwoText + ". He/She will " + verbSixText + ". " +
                "When he/she is done, he/she will ask for some " + foodTwoText + ". On the way home he/she will start a game of " + gameOneText +
                ". When you finally get home, you'll have to " + verbSevenText + ". Then he/she will want a " + nounFiveText + ". You'll have to find a " + nounSixText +
                " and " + pluralOneText + ". When he/she sees the " + nounSixText + ", he/she will start " + verbINGText + ". Then he/she will " + verbEightText +
                " out of " + pluralTwoText + ". Of course, when he/she is finished, he/she will want to " + verbNineText + ". So, he/she will ask for a " + nounOneText +
                ". And chances are if you give him/her a " + nounOneText + ", he/she is going to want a " + foodOneText + '.';

        animal.setVisibility(View.INVISIBLE);
        foodOne.setVisibility(View.INVISIBLE);
        nounOne.setVisibility(View.INVISIBLE);
        verbOne.setVisibility(View.INVISIBLE);
        verbTwo.setVisibility(View.INVISIBLE);
        verbThree.setVisibility(View.INVISIBLE);
        verbFour.setVisibility(View.INVISIBLE);
        nounTwo.setVisibility(View.INVISIBLE);
        locationOne.setVisibility(View.INVISIBLE);
        nounThree.setVisibility(View.INVISIBLE);
        nounFour.setVisibility(View.INVISIBLE);
        locationTwo.setVisibility(View.INVISIBLE);
        verbFive.setVisibility(View.INVISIBLE);
        foodTwo.setVisibility(View.INVISIBLE);
        gameOne.setVisibility(View.INVISIBLE);
        verbSix.setVisibility(View.INVISIBLE);
        nounFive.setVisibility(View.INVISIBLE);
        nounSix.setVisibility(View.INVISIBLE);
        pluralOne.setVisibility(View.INVISIBLE);
        verbING.setVisibility(View.INVISIBLE);
        verbSeven.setVisibility(View.INVISIBLE);
        pluralTwo.setVisibility(View.INVISIBLE);
        verbEight.setVisibility(View.INVISIBLE);
        verbNine.setVisibility(View.INVISIBLE);


        TextView whyOutput = findViewById(R.id.whyOutput);
        whyOutput.setText(whyDoIPutMyselfThroughThis);

        whyOutput.setVisibility(View.VISIBLE);

    }
}