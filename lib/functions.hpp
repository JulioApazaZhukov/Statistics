void arithmeticMean ()
{
    string sInput;
    float fInput;
    DynamicArray<float> floatArray;
    while (true) {
        cout << "Enter a number (or press Enter to finish): ";
        getline(cin, sInput);

        if (sInput.empty()) {
            break;
        }

        stringstream ss(sInput);
        if (ss >> fInput) {
            floatArray.addElement(fInput);
        } else {
            cout << "Invalid entry. Please enter a number." << endl;
        }
    }

    if (floatArray.getSize() > 0) {
        float sum = 0;
        for (unsigned int i = 0; i < floatArray.getSize(); i++) {
            sum += floatArray[i];
        }
        cout << "The average is: " << sum / floatArray.getSize() << endl;
    } else {
        cout << "No numbers entered." << endl;
    }
}

void weightedArithmeticMean() {
    string sInput, sWeight;
    float fInput, fWeight;
    DynamicArray<float> valuesArray;
    DynamicArray<float> weightsArray;

    while (true) {
        cout << "Enter a number (or press Enter to finish): ";
        getline(cin, sInput);
        if (sInput.empty()) {
            break;
        }

        stringstream ss(sInput);
        if (!(ss >> fInput)) {
            cout << "Invalid entry. Please enter a number." << endl;
            continue;
        }

        cout << "Enter the weight (or press Enter to set default weight 1): ";
        getline(cin, sWeight);
        if (sWeight.empty()) {
            fWeight = 1.0;
        } else {
            stringstream ssWeight(sWeight);
            if (!(ssWeight >> fWeight)) {
                cout << "Invalid weight. Using default weight 1." << endl;
                fWeight = 1.0;
            }
        }

        valuesArray.addElement(fInput);
        weightsArray.addElement(fWeight);
    }

    if (valuesArray.getSize() > 0) {
        float weightedSum = 0;
        float totalWeight = 0;

        for (size_t i = 0; i < valuesArray.getSize(); i++) {
            weightedSum += valuesArray[i] * weightsArray[i];
            totalWeight += weightsArray[i];
        }

        if (totalWeight > 0) {
            cout << "The weighted arithmetic mean is: " << weightedSum / totalWeight << endl;
        } else {
            cout << "Total weight is zero. Cannot calculate the mean." << endl;
        }
    } else {
        cout << "No numbers entered." << endl;
    }
}