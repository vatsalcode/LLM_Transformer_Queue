package com.company;

import java.util.ArrayList;

public class MobilePhone {
    private String myNumber;
    private ArrayList<Contact> myContacts = new ArrayList();

    public MobilePhone(String myNumber) {
        this.myNumber = myNumber;
    }

    public boolean addNewContact(Contact c) {
        if (findContact(c.getName()) >= 0)
            return false;
        myContacts.add(c);
        return true;
    }

    private int findContact(Contact c) {
        return myContacts.indexOf(c);
    }

    private int findContact(String name) {
        int pos = -1;
        for (int i = 0; i < myContacts.size(); i++) {
            if (myContacts.get(i).getName().equals(name))
                pos = i;
        }
        return pos;
    }

    public boolean updateContact(Contact oldContact, Contact newConnect) {
        int pos = findContact(oldContact);
        if (pos >= 0) {
            myContacts.set(pos, newConnect);
            return true;
        }
        return false;
    }

    public boolean removeContact(Contact c) {
        if (findContact(c.getName()) >= 0) {
            myContacts.remove(c);
            return true;
        }
        return false;
    }

    public Contact queryContact(String name) {
        int pos = findContact(name);
        if (pos >= 0)
            return myContacts.get(pos);
        return null;
    }

    public void printContacts() {
        System.out.println("Contact List");
        for (int i = 0; i < myContacts.size(); i++) {
            System.out.println((i + 1) + ". " + myContacts.get(i).getName() + " -> " + myContacts.get(i).getPhoneNumber());
        }
    }
}
