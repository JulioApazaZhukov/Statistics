void arithmeticAverage ()
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
        cout << "The arithmetic average is: " << sum / floatArray.getSize() << endl;
    } else {
        cout << "No numbers entered." << endl;
    }
}

void weightedArithmeticMean ()
{
    string sInput;
    float fInput;
    string sWeight;
    float fWeight;
    DynamicArray<float> floatArray;
    while (true) {
        cout << "Enter a number (or press Enter to finish): ";
        getline(cin, sInput);

        if (sInput.empty()) {
            break;
        }

        cout << "Enter the weight (or press Enter to set default weight 1): ";
        getline(cin, sWeight);

        if (sWeight.empty()) {
            fWeight = 1;
        } // Inconplete

    if (floatArray.getSize() > 0) {
        float sum = 0;
        for (unsigned int i = 0; i < floatArray.getSize(); i++) {
            sum += floatArray[i];
        }
        cout << "The weighted arithmetic mean is: " << sum / floatArray.getSize() << endl;
    } else {
        cout << "No numbers entered." << endl;
    }
}