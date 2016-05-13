//use <> to include files that are part of the compiler, or "" for custom files
#include <iostream>
#include <string.h>
#include "demoCode.h"
#include <gtk/gtk.h>
#include <glib.h>
#include <glib/gi18n.h>
#include <locale.h>

using namespace std;

// see https://developer.gnome.org/gtk3/stable/gtk-getting-started.html

static void print_hello (GtkWidget *widget, gpointer data){
    g_print("Ellow world!");
}

int main(int argc, char *argv[]){
    GtkBuilder *builder;
    GObject *window;
    GObject *button;

    setlocale(LC_ALL, "");

    gtk_init(&argc, &argv);

    //PREDEFINED GTK+ GUI
    builder = gtk_builder_new_from_file("GUI.glade");

    //CUSTOM GTK+ GUI
    // construct a GtkBuilder instance, and load our external UI description. no error handling.
    //builder = gtk_builder_new();
    //gtk_builder_add_from_file(builder, "/home/leander/ClionProjects/gtkImpl/GUI.ui", NULL);

    //Get the element 'window' and bind a signal to it
    //window = gtk_builder_get_object(builder, "window");
    //g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL); //no extra data given

    //button = gtk_builder_get_object(builder, "button1");
    //g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL);

    //button = gtk_builder_get_object(builder, "button2");
    //g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL);

    //button = gtk_builder_get_object(builder, "quit");
    //g_signal_connect(button, "clicked", G_CALLBACK(gtk_main_quit), NULL);

    gtk_main();

    return 0;
}

/*
const int DEFAULTWIDTH = 300;
const int DEFAULTHEIGHT = 200;
const gchar * WINDOWNAME = "My first GTK+application!";
const gchar * IDENTIFIER = "org.gtk.example";

//activate the application with a in-code defined UI.
static void activate(GtkApplication* app, gpointer user_data){
    //pointers to hold the window and elements therein
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *button;

    //create a new window (not yet active)
    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), WINDOWNAME);
    gtk_window_set_default_size(GTK_WINDOW(window), DEFAULTWIDTH, DEFAULTHEIGHT);

    //container for buttons
    grid = gtk_grid_new();

    //put the container in the window
    gtk_container_add(GTK_CONTAINER(window), grid);

    //GTK is event driven; everytime a user does something, like resizing a field or clicking a button,
    //an event gets send to the GTK library. It responds by executing the 'signals' that are connected
    //to the specific element and event. in this case, "clicked" is the event.
    button = gtk_button_new_with_label("OMG BUTTON(TM)");
    g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL);

    //place the first button we created in the first grid cell (coords 0,0) and have it fill
    //exactly 1 cell horizontally and vertically (no spanning)
    gtk_grid_attach(GTK_GRID(grid), button, 0, 0, 1, 1);

    //make a new button using the already existing button object
    button = gtk_button_new_with_label("OMG BUTTON(TM) 2: The return of the mouse(C)(R)");
    g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL);

    //place that new button in a second cell.
    gtk_grid_attach(GTK_GRID(grid), button, 1, 0, 1, 1);

    //and finally, the quit button
    button = gtk_button_new_with_label("Goodbye");
    g_signal_connect_swapped(button, "clicked", G_CALLBACK(gtk_widget_destroy), window);

    //this dude spans two cells. dude.
    gtk_grid_attach(GTK_GRID(grid), button, 0, 1, 2, 1);

    // now activate everything. eager loading FTW!
    gtk_widget_show_all(window);
}

*/
/**
 * The main method that gets executed on launch
 *//*

int main(int argc, char **argv) {
    //get pointer to app location
    GtkApplication *app;
    int status;

    //new application with it's ID and flags
    app = gtk_application_new (IDENTIFIER, G_APPLICATION_FLAGS_NONE);

    //creates a new signal handler. uses app reference, and a connection to the method that handles the activation
    g_signal_connect (app, "activate", G_CALLBACK(activate), NULL);

    //run the application, supplying the commandline arguments count (argc) and the actual arguments (argv)
    //note that the arguments for GTK will be removed from the list, leaving only the ones that are for your application.
    status = g_application_run (G_APPLICATION(app), argc, argv);

    //Destroy a variable, freeing memory. this is done by GTK's version of the Object class (Gobject)
    g_object_unref(app);

    //demoCode();
    //pointerCode();

    return status;
    //return 0;
}*/
