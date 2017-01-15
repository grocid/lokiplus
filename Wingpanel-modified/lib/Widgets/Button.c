/* Button.c generated by valac 0.34.4, the Vala compiler
 * generated from Button.vala, do not modify */

/*
 * Copyright (c) 2011-2015 Wingpanel Developers (http://launchpad.net/wingpanel)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gdk-pixbuf/gdk-pixbuf.h>


#define WINGPANEL_WIDGETS_TYPE_CONTAINER (wingpanel_widgets_container_get_type ())
#define WINGPANEL_WIDGETS_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_WIDGETS_TYPE_CONTAINER, WingpanelWidgetsContainer))
#define WINGPANEL_WIDGETS_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_WIDGETS_TYPE_CONTAINER, WingpanelWidgetsContainerClass))
#define WINGPANEL_WIDGETS_IS_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_WIDGETS_TYPE_CONTAINER))
#define WINGPANEL_WIDGETS_IS_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_WIDGETS_TYPE_CONTAINER))
#define WINGPANEL_WIDGETS_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_WIDGETS_TYPE_CONTAINER, WingpanelWidgetsContainerClass))

typedef struct _WingpanelWidgetsContainer WingpanelWidgetsContainer;
typedef struct _WingpanelWidgetsContainerClass WingpanelWidgetsContainerClass;
typedef struct _WingpanelWidgetsContainerPrivate WingpanelWidgetsContainerPrivate;

#define WINGPANEL_WIDGETS_TYPE_BUTTON (wingpanel_widgets_button_get_type ())
#define WINGPANEL_WIDGETS_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_WIDGETS_TYPE_BUTTON, WingpanelWidgetsButton))
#define WINGPANEL_WIDGETS_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_WIDGETS_TYPE_BUTTON, WingpanelWidgetsButtonClass))
#define WINGPANEL_WIDGETS_IS_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_WIDGETS_TYPE_BUTTON))
#define WINGPANEL_WIDGETS_IS_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_WIDGETS_TYPE_BUTTON))
#define WINGPANEL_WIDGETS_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_WIDGETS_TYPE_BUTTON, WingpanelWidgetsButtonClass))

typedef struct _WingpanelWidgetsButton WingpanelWidgetsButton;
typedef struct _WingpanelWidgetsButtonClass WingpanelWidgetsButtonClass;
typedef struct _WingpanelWidgetsButtonPrivate WingpanelWidgetsButtonPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _WingpanelWidgetsContainer {
	GtkButton parent_instance;
	WingpanelWidgetsContainerPrivate * priv;
};

struct _WingpanelWidgetsContainerClass {
	GtkButtonClass parent_class;
};

struct _WingpanelWidgetsButton {
	WingpanelWidgetsContainer parent_instance;
	WingpanelWidgetsButtonPrivate * priv;
};

struct _WingpanelWidgetsButtonClass {
	WingpanelWidgetsContainerClass parent_class;
};

struct _WingpanelWidgetsButtonPrivate {
	GtkLabel* button_label;
	GtkImage* button_image;
};


static gpointer wingpanel_widgets_button_parent_class = NULL;

GType wingpanel_widgets_container_get_type (void) G_GNUC_CONST;
GType wingpanel_widgets_button_get_type (void) G_GNUC_CONST;
#define WINGPANEL_WIDGETS_BUTTON_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WINGPANEL_WIDGETS_TYPE_BUTTON, WingpanelWidgetsButtonPrivate))
enum  {
	WINGPANEL_WIDGETS_BUTTON_DUMMY_PROPERTY
};
WingpanelWidgetsButton* wingpanel_widgets_button_new (const gchar* caption, const gchar* icon_name);
WingpanelWidgetsButton* wingpanel_widgets_button_construct (GType object_type, const gchar* caption, const gchar* icon_name);
WingpanelWidgetsContainer* wingpanel_widgets_container_new (void);
WingpanelWidgetsContainer* wingpanel_widgets_container_construct (GType object_type);
GtkGrid* wingpanel_widgets_container_get_content_widget (WingpanelWidgetsContainer* self);
static GtkImage* wingpanel_widgets_button_create_image_for_icon_name (WingpanelWidgetsButton* self, const gchar* icon_name);
static GtkLabel* wingpanel_widgets_button_create_label_for_caption (WingpanelWidgetsButton* self, const gchar* caption, gboolean use_mnemonic);
WingpanelWidgetsButton* wingpanel_widgets_button_new_with_mnemonic (const gchar* caption, const gchar* icon_name);
WingpanelWidgetsButton* wingpanel_widgets_button_construct_with_mnemonic (GType object_type, const gchar* caption, const gchar* icon_name);
void wingpanel_widgets_button_set_caption (WingpanelWidgetsButton* self, const gchar* caption);
gchar* wingpanel_widgets_button_get_caption (WingpanelWidgetsButton* self);
void wingpanel_widgets_button_set_icon (WingpanelWidgetsButton* self, const gchar* icon_name);
void wingpanel_widgets_button_set_pixbuf (WingpanelWidgetsButton* self, GdkPixbuf* pixbuf);
GdkPixbuf* wingpanel_widgets_button_get_pixbuf (WingpanelWidgetsButton* self);
GtkLabel* wingpanel_widgets_button_get_label (WingpanelWidgetsButton* self);
static void wingpanel_widgets_button_finalize (GObject* obj);


WingpanelWidgetsButton* wingpanel_widgets_button_construct (GType object_type, const gchar* caption, const gchar* icon_name) {
	WingpanelWidgetsButton * self = NULL;
	GtkGrid* content_widget = NULL;
	GtkGrid* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GtkImage* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	GtkLabel* _tmp4_ = NULL;
	GtkImage* _tmp5_ = NULL;
	GtkLabel* _tmp6_ = NULL;
#line 25 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_val_if_fail (caption != NULL, NULL);
#line 25 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	self = (WingpanelWidgetsButton*) wingpanel_widgets_container_construct (object_type);
#line 26 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp0_ = wingpanel_widgets_container_get_content_widget ((WingpanelWidgetsContainer*) self);
#line 26 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	content_widget = _tmp0_;
#line 28 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp1_ = icon_name;
#line 28 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp2_ = wingpanel_widgets_button_create_image_for_icon_name (self, _tmp1_);
#line 28 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_g_object_unref0 (self->priv->button_image);
#line 28 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	self->priv->button_image = _tmp2_;
#line 29 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp3_ = caption;
#line 29 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp4_ = wingpanel_widgets_button_create_label_for_caption (self, _tmp3_, FALSE);
#line 29 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_g_object_unref0 (self->priv->button_label);
#line 29 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	self->priv->button_label = _tmp4_;
#line 31 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp5_ = self->priv->button_image;
#line 31 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_grid_attach (content_widget, (GtkWidget*) _tmp5_, 0, 0, 1, 1);
#line 32 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp6_ = self->priv->button_label;
#line 32 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_grid_attach (content_widget, (GtkWidget*) _tmp6_, 1, 0, 1, 1);
#line 25 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_g_object_unref0 (content_widget);
#line 25 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	return self;
#line 152 "Button.c"
}


WingpanelWidgetsButton* wingpanel_widgets_button_new (const gchar* caption, const gchar* icon_name) {
#line 25 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	return wingpanel_widgets_button_construct (WINGPANEL_WIDGETS_TYPE_BUTTON, caption, icon_name);
#line 159 "Button.c"
}


WingpanelWidgetsButton* wingpanel_widgets_button_construct_with_mnemonic (GType object_type, const gchar* caption, const gchar* icon_name) {
	WingpanelWidgetsButton * self = NULL;
	GtkGrid* content_widget = NULL;
	GtkGrid* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GtkImage* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	GtkLabel* _tmp4_ = NULL;
	GtkImage* _tmp5_ = NULL;
	GtkLabel* _tmp6_ = NULL;
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_val_if_fail (caption != NULL, NULL);
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	self = (WingpanelWidgetsButton*) wingpanel_widgets_container_construct (object_type);
#line 36 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp0_ = wingpanel_widgets_container_get_content_widget ((WingpanelWidgetsContainer*) self);
#line 36 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	content_widget = _tmp0_;
#line 38 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp1_ = icon_name;
#line 38 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp2_ = wingpanel_widgets_button_create_image_for_icon_name (self, _tmp1_);
#line 38 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_g_object_unref0 (self->priv->button_image);
#line 38 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	self->priv->button_image = _tmp2_;
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp3_ = caption;
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp4_ = wingpanel_widgets_button_create_label_for_caption (self, _tmp3_, TRUE);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_g_object_unref0 (self->priv->button_label);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	self->priv->button_label = _tmp4_;
#line 41 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp5_ = self->priv->button_image;
#line 41 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_grid_attach (content_widget, (GtkWidget*) _tmp5_, 0, 0, 1, 1);
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp6_ = self->priv->button_label;
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_grid_attach (content_widget, (GtkWidget*) _tmp6_, 1, 0, 1, 1);
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_g_object_unref0 (content_widget);
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	return self;
#line 209 "Button.c"
}


WingpanelWidgetsButton* wingpanel_widgets_button_new_with_mnemonic (const gchar* caption, const gchar* icon_name) {
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	return wingpanel_widgets_button_construct_with_mnemonic (WINGPANEL_WIDGETS_TYPE_BUTTON, caption, icon_name);
#line 216 "Button.c"
}


void wingpanel_widgets_button_set_caption (WingpanelWidgetsButton* self, const gchar* caption) {
	GtkLabel* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
#line 45 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_if_fail (self != NULL);
#line 45 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_if_fail (caption != NULL);
#line 46 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp0_ = self->priv->button_label;
#line 46 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp1_ = caption;
#line 46 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp2_ = g_markup_escape_text (_tmp1_, (gssize) -1);
#line 46 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp3_ = _tmp2_;
#line 46 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_label_set_label (_tmp0_, _tmp3_);
#line 46 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_g_free0 (_tmp3_);
#line 241 "Button.c"
}


gchar* wingpanel_widgets_button_get_caption (WingpanelWidgetsButton* self) {
	gchar* result = NULL;
	GtkLabel* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
#line 49 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 50 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp0_ = self->priv->button_label;
#line 50 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp1_ = gtk_label_get_label (_tmp0_);
#line 50 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp2_ = g_strdup (_tmp1_);
#line 50 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	result = _tmp2_;
#line 50 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	return result;
#line 262 "Button.c"
}


void wingpanel_widgets_button_set_icon (WingpanelWidgetsButton* self, const gchar* icon_name) {
	const gchar* _tmp0_ = NULL;
#line 53 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_if_fail (self != NULL);
#line 54 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp0_ = icon_name;
#line 54 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	if (_tmp0_ == NULL) {
#line 274 "Button.c"
		GtkImage* _tmp1_ = NULL;
#line 55 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp1_ = self->priv->button_image;
#line 55 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		gtk_widget_set_visible ((GtkWidget*) _tmp1_, FALSE);
#line 280 "Button.c"
	} else {
		GtkImage* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
		GtkImage* _tmp4_ = NULL;
#line 57 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp2_ = self->priv->button_image;
#line 57 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp3_ = icon_name;
#line 57 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		gtk_image_set_from_icon_name (_tmp2_, _tmp3_, GTK_ICON_SIZE_BUTTON);
#line 58 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp4_ = self->priv->button_image;
#line 58 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		gtk_widget_set_visible ((GtkWidget*) _tmp4_, TRUE);
#line 295 "Button.c"
	}
}


void wingpanel_widgets_button_set_pixbuf (WingpanelWidgetsButton* self, GdkPixbuf* pixbuf) {
	GtkImage* _tmp0_ = NULL;
	GdkPixbuf* _tmp1_ = NULL;
	GtkImage* _tmp2_ = NULL;
	GdkPixbuf* _tmp3_ = NULL;
#line 62 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_if_fail (self != NULL);
#line 63 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp0_ = self->priv->button_image;
#line 63 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp1_ = pixbuf;
#line 63 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_image_set_from_pixbuf (_tmp0_, _tmp1_);
#line 64 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp2_ = self->priv->button_image;
#line 64 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp3_ = pixbuf;
#line 64 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp2_, _tmp3_ != NULL);
#line 319 "Button.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 68 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	return self ? g_object_ref (self) : NULL;
#line 326 "Button.c"
}


GdkPixbuf* wingpanel_widgets_button_get_pixbuf (WingpanelWidgetsButton* self) {
	GdkPixbuf* result = NULL;
	GtkImage* _tmp0_ = NULL;
	GdkPixbuf* _tmp1_ = NULL;
	GdkPixbuf* _tmp2_ = NULL;
#line 67 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 68 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp0_ = self->priv->button_image;
#line 68 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp1_ = gtk_image_get_pixbuf (_tmp0_);
#line 68 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp2_ = _g_object_ref0 (_tmp1_);
#line 68 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	result = _tmp2_;
#line 68 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	return result;
#line 347 "Button.c"
}


GtkLabel* wingpanel_widgets_button_get_label (WingpanelWidgetsButton* self) {
	GtkLabel* result = NULL;
	GtkLabel* _tmp0_ = NULL;
	GtkLabel* _tmp1_ = NULL;
#line 71 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 72 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp0_ = self->priv->button_label;
#line 72 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 72 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	result = _tmp1_;
#line 72 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	return result;
#line 365 "Button.c"
}


static GtkLabel* wingpanel_widgets_button_create_label_for_caption (WingpanelWidgetsButton* self, const gchar* caption, gboolean use_mnemonic) {
	GtkLabel* result = NULL;
	GtkLabel* label_widget = NULL;
	gboolean _tmp0_ = FALSE;
	GtkLabel* _tmp10_ = NULL;
	GtkLabel* _tmp11_ = NULL;
	GtkLabel* _tmp12_ = NULL;
	GtkLabel* _tmp13_ = NULL;
#line 75 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 75 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_val_if_fail (caption != NULL, NULL);
#line 78 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp0_ = use_mnemonic;
#line 78 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	if (_tmp0_) {
#line 385 "Button.c"
		const gchar* _tmp1_ = NULL;
		gchar* _tmp2_ = NULL;
		gchar* _tmp3_ = NULL;
		GtkLabel* _tmp4_ = NULL;
		GtkLabel* _tmp5_ = NULL;
#line 79 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp1_ = caption;
#line 79 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp2_ = g_markup_escape_text (_tmp1_, (gssize) -1);
#line 79 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp3_ = _tmp2_;
#line 79 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp4_ = (GtkLabel*) gtk_label_new_with_mnemonic (_tmp3_);
#line 79 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		g_object_ref_sink (_tmp4_);
#line 79 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_g_object_unref0 (label_widget);
#line 79 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		label_widget = _tmp4_;
#line 79 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_g_free0 (_tmp3_);
#line 80 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp5_ = label_widget;
#line 80 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		gtk_label_set_mnemonic_widget (_tmp5_, (GtkWidget*) self);
#line 411 "Button.c"
	} else {
		const gchar* _tmp6_ = NULL;
		gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		GtkLabel* _tmp9_ = NULL;
#line 82 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp6_ = caption;
#line 82 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp7_ = g_markup_escape_text (_tmp6_, (gssize) -1);
#line 82 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp8_ = _tmp7_;
#line 82 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp9_ = (GtkLabel*) gtk_label_new (_tmp8_);
#line 82 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		g_object_ref_sink (_tmp9_);
#line 82 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_g_object_unref0 (label_widget);
#line 82 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		label_widget = _tmp9_;
#line 82 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_g_free0 (_tmp8_);
#line 433 "Button.c"
	}
#line 85 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp10_ = label_widget;
#line 85 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_label_set_use_markup (_tmp10_, TRUE);
#line 86 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp11_ = label_widget;
#line 86 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_widget_set_halign ((GtkWidget*) _tmp11_, GTK_ALIGN_START);
#line 87 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp12_ = label_widget;
#line 87 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_widget_set_margin_start ((GtkWidget*) _tmp12_, 6);
#line 88 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp13_ = label_widget;
#line 88 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_widget_set_margin_end ((GtkWidget*) _tmp13_, 10);
#line 90 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	result = label_widget;
#line 90 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	return result;
#line 455 "Button.c"
}


static GtkImage* wingpanel_widgets_button_create_image_for_icon_name (WingpanelWidgetsButton* self, const gchar* icon_name) {
	GtkImage* result = NULL;
	GtkImage* image = NULL;
	GtkImage* _tmp0_ = NULL;
	GtkImage* _tmp1_ = NULL;
	GtkImage* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
#line 93 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 94 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp0_ = (GtkImage*) gtk_image_new ();
#line 94 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_object_ref_sink (_tmp0_);
#line 94 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	image = _tmp0_;
#line 95 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp1_ = image;
#line 95 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_widget_set_margin_start ((GtkWidget*) _tmp1_, 6);
#line 96 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp2_ = image;
#line 96 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	gtk_widget_set_no_show_all ((GtkWidget*) _tmp2_, TRUE);
#line 97 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_tmp3_ = icon_name;
#line 97 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	if (_tmp3_ != NULL) {
#line 486 "Button.c"
		GtkImage* _tmp4_ = NULL;
		const gchar* _tmp5_ = NULL;
		GtkImage* _tmp6_ = NULL;
#line 98 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp4_ = image;
#line 98 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp5_ = icon_name;
#line 98 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		gtk_image_set_from_icon_name (_tmp4_, _tmp5_, GTK_ICON_SIZE_BUTTON);
#line 99 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp6_ = image;
#line 99 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		gtk_widget_set_visible ((GtkWidget*) _tmp6_, TRUE);
#line 500 "Button.c"
	} else {
		GtkImage* _tmp7_ = NULL;
#line 101 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		_tmp7_ = image;
#line 101 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
		gtk_widget_set_visible ((GtkWidget*) _tmp7_, FALSE);
#line 507 "Button.c"
	}
#line 104 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	result = image;
#line 104 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	return result;
#line 513 "Button.c"
}


static void wingpanel_widgets_button_class_init (WingpanelWidgetsButtonClass * klass) {
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	wingpanel_widgets_button_parent_class = g_type_class_peek_parent (klass);
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	g_type_class_add_private (klass, sizeof (WingpanelWidgetsButtonPrivate));
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	G_OBJECT_CLASS (klass)->finalize = wingpanel_widgets_button_finalize;
#line 524 "Button.c"
}


static void wingpanel_widgets_button_instance_init (WingpanelWidgetsButton * self) {
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	self->priv = WINGPANEL_WIDGETS_BUTTON_GET_PRIVATE (self);
#line 531 "Button.c"
}


static void wingpanel_widgets_button_finalize (GObject* obj) {
	WingpanelWidgetsButton * self;
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WINGPANEL_WIDGETS_TYPE_BUTTON, WingpanelWidgetsButton);
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_g_object_unref0 (self->priv->button_label);
#line 23 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	_g_object_unref0 (self->priv->button_image);
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Button.vala"
	G_OBJECT_CLASS (wingpanel_widgets_button_parent_class)->finalize (obj);
#line 545 "Button.c"
}


GType wingpanel_widgets_button_get_type (void) {
	static volatile gsize wingpanel_widgets_button_type_id__volatile = 0;
	if (g_once_init_enter (&wingpanel_widgets_button_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WingpanelWidgetsButtonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) wingpanel_widgets_button_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WingpanelWidgetsButton), 0, (GInstanceInitFunc) wingpanel_widgets_button_instance_init, NULL };
		GType wingpanel_widgets_button_type_id;
		wingpanel_widgets_button_type_id = g_type_register_static (WINGPANEL_WIDGETS_TYPE_CONTAINER, "WingpanelWidgetsButton", &g_define_type_info, 0);
		g_once_init_leave (&wingpanel_widgets_button_type_id__volatile, wingpanel_widgets_button_type_id);
	}
	return wingpanel_widgets_button_type_id__volatile;
}



