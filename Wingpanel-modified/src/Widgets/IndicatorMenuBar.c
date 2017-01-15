/* IndicatorMenuBar.c generated by valac 0.34.4, the Vala compiler
 * generated from IndicatorMenuBar.vala, do not modify */

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
#include <gee.h>
#include <wingpanel.h>


#define WINGPANEL_WIDGETS_TYPE_MENU_BAR (wingpanel_widgets_menu_bar_get_type ())
#define WINGPANEL_WIDGETS_MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_WIDGETS_TYPE_MENU_BAR, WingpanelWidgetsMenuBar))
#define WINGPANEL_WIDGETS_MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_WIDGETS_TYPE_MENU_BAR, WingpanelWidgetsMenuBarClass))
#define WINGPANEL_WIDGETS_IS_MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_WIDGETS_TYPE_MENU_BAR))
#define WINGPANEL_WIDGETS_IS_MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_WIDGETS_TYPE_MENU_BAR))
#define WINGPANEL_WIDGETS_MENU_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_WIDGETS_TYPE_MENU_BAR, WingpanelWidgetsMenuBarClass))

typedef struct _WingpanelWidgetsMenuBar WingpanelWidgetsMenuBar;
typedef struct _WingpanelWidgetsMenuBarClass WingpanelWidgetsMenuBarClass;
typedef struct _WingpanelWidgetsMenuBarPrivate WingpanelWidgetsMenuBarPrivate;

#define WINGPANEL_WIDGETS_TYPE_INDICATOR_MENU_BAR (wingpanel_widgets_indicator_menu_bar_get_type ())
#define WINGPANEL_WIDGETS_INDICATOR_MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_WIDGETS_TYPE_INDICATOR_MENU_BAR, WingpanelWidgetsIndicatorMenuBar))
#define WINGPANEL_WIDGETS_INDICATOR_MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_WIDGETS_TYPE_INDICATOR_MENU_BAR, WingpanelWidgetsIndicatorMenuBarClass))
#define WINGPANEL_WIDGETS_IS_INDICATOR_MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_WIDGETS_TYPE_INDICATOR_MENU_BAR))
#define WINGPANEL_WIDGETS_IS_INDICATOR_MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_WIDGETS_TYPE_INDICATOR_MENU_BAR))
#define WINGPANEL_WIDGETS_INDICATOR_MENU_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_WIDGETS_TYPE_INDICATOR_MENU_BAR, WingpanelWidgetsIndicatorMenuBarClass))

typedef struct _WingpanelWidgetsIndicatorMenuBar WingpanelWidgetsIndicatorMenuBar;
typedef struct _WingpanelWidgetsIndicatorMenuBarClass WingpanelWidgetsIndicatorMenuBarClass;
typedef struct _WingpanelWidgetsIndicatorMenuBarPrivate WingpanelWidgetsIndicatorMenuBarPrivate;

#define WINGPANEL_WIDGETS_TYPE_INDICATOR_ENTRY (wingpanel_widgets_indicator_entry_get_type ())
#define WINGPANEL_WIDGETS_INDICATOR_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_WIDGETS_TYPE_INDICATOR_ENTRY, WingpanelWidgetsIndicatorEntry))
#define WINGPANEL_WIDGETS_INDICATOR_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_WIDGETS_TYPE_INDICATOR_ENTRY, WingpanelWidgetsIndicatorEntryClass))
#define WINGPANEL_WIDGETS_IS_INDICATOR_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_WIDGETS_TYPE_INDICATOR_ENTRY))
#define WINGPANEL_WIDGETS_IS_INDICATOR_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_WIDGETS_TYPE_INDICATOR_ENTRY))
#define WINGPANEL_WIDGETS_INDICATOR_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_WIDGETS_TYPE_INDICATOR_ENTRY, WingpanelWidgetsIndicatorEntryClass))

typedef struct _WingpanelWidgetsIndicatorEntry WingpanelWidgetsIndicatorEntry;
typedef struct _WingpanelWidgetsIndicatorEntryClass WingpanelWidgetsIndicatorEntryClass;

#define WINGPANEL_SERVICES_TYPE_INDICATOR_SORTER (wingpanel_services_indicator_sorter_get_type ())
#define WINGPANEL_SERVICES_INDICATOR_SORTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_SERVICES_TYPE_INDICATOR_SORTER, WingpanelServicesIndicatorSorter))
#define WINGPANEL_SERVICES_INDICATOR_SORTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_SERVICES_TYPE_INDICATOR_SORTER, WingpanelServicesIndicatorSorterClass))
#define WINGPANEL_SERVICES_IS_INDICATOR_SORTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_SERVICES_TYPE_INDICATOR_SORTER))
#define WINGPANEL_SERVICES_IS_INDICATOR_SORTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_SERVICES_TYPE_INDICATOR_SORTER))
#define WINGPANEL_SERVICES_INDICATOR_SORTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_SERVICES_TYPE_INDICATOR_SORTER, WingpanelServicesIndicatorSorterClass))

typedef struct _WingpanelServicesIndicatorSorter WingpanelServicesIndicatorSorter;
typedef struct _WingpanelServicesIndicatorSorterClass WingpanelServicesIndicatorSorterClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _WingpanelWidgetsIndicatorEntryPrivate WingpanelWidgetsIndicatorEntryPrivate;
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))

struct _WingpanelWidgetsMenuBar {
	GtkMenuBar parent_instance;
	WingpanelWidgetsMenuBarPrivate * priv;
};

struct _WingpanelWidgetsMenuBarClass {
	GtkMenuBarClass parent_class;
};

struct _WingpanelWidgetsIndicatorMenuBar {
	WingpanelWidgetsMenuBar parent_instance;
	WingpanelWidgetsIndicatorMenuBarPrivate * priv;
};

struct _WingpanelWidgetsIndicatorMenuBarClass {
	WingpanelWidgetsMenuBarClass parent_class;
};

struct _WingpanelWidgetsIndicatorMenuBarPrivate {
	GeeList* sorted_items;
	WingpanelServicesIndicatorSorter* sorter;
};

struct _WingpanelWidgetsIndicatorEntry {
	GtkMenuItem parent_instance;
	WingpanelWidgetsIndicatorEntryPrivate * priv;
	WingpanelIndicator* base_indicator;
	WingpanelWidgetsIndicatorMenuBar* menu_bar;
};

struct _WingpanelWidgetsIndicatorEntryClass {
	GtkMenuItemClass parent_class;
};


static gpointer wingpanel_widgets_indicator_menu_bar_parent_class = NULL;

GType wingpanel_widgets_menu_bar_get_type (void) G_GNUC_CONST;
GType wingpanel_widgets_indicator_menu_bar_get_type (void) G_GNUC_CONST;
GType wingpanel_widgets_indicator_entry_get_type (void) G_GNUC_CONST;
GType wingpanel_services_indicator_sorter_get_type (void) G_GNUC_CONST;
#define WINGPANEL_WIDGETS_INDICATOR_MENU_BAR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WINGPANEL_WIDGETS_TYPE_INDICATOR_MENU_BAR, WingpanelWidgetsIndicatorMenuBarPrivate))
enum  {
	WINGPANEL_WIDGETS_INDICATOR_MENU_BAR_DUMMY_PROPERTY
};
WingpanelServicesIndicatorSorter* wingpanel_services_indicator_sorter_new (void);
WingpanelServicesIndicatorSorter* wingpanel_services_indicator_sorter_construct (GType object_type);
WingpanelWidgetsIndicatorMenuBar* wingpanel_widgets_indicator_menu_bar_new (void);
WingpanelWidgetsIndicatorMenuBar* wingpanel_widgets_indicator_menu_bar_construct (GType object_type);
WingpanelWidgetsMenuBar* wingpanel_widgets_menu_bar_new (void);
WingpanelWidgetsMenuBar* wingpanel_widgets_menu_bar_construct (GType object_type);
void wingpanel_widgets_indicator_menu_bar_insert_sorted (WingpanelWidgetsIndicatorMenuBar* self, WingpanelWidgetsIndicatorEntry* item);
gint wingpanel_services_indicator_sorter_compare_func (WingpanelServicesIndicatorSorter* self, WingpanelWidgetsIndicatorEntry* a, WingpanelWidgetsIndicatorEntry* b);
static gint _wingpanel_services_indicator_sorter_compare_func_gcompare_data_func (gconstpointer a, gconstpointer b, gpointer self);
void wingpanel_widgets_indicator_menu_bar_apply_new_order (WingpanelWidgetsIndicatorMenuBar* self);
static void wingpanel_widgets_indicator_menu_bar_real_remove (GtkContainer* base, GtkWidget* widget);
static void wingpanel_widgets_indicator_menu_bar_clear (WingpanelWidgetsIndicatorMenuBar* self);
static void wingpanel_widgets_indicator_menu_bar_append_all_items (WingpanelWidgetsIndicatorMenuBar* self);
static void wingpanel_widgets_indicator_menu_bar_finalize (GObject* obj);


WingpanelWidgetsIndicatorMenuBar* wingpanel_widgets_indicator_menu_bar_construct (GType object_type) {
	WingpanelWidgetsIndicatorMenuBar * self = NULL;
	GeeArrayList* _tmp0_ = NULL;
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	self = (WingpanelWidgetsIndicatorMenuBar*) wingpanel_widgets_menu_bar_construct (object_type);
#line 25 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp0_ = gee_array_list_new (WINGPANEL_WIDGETS_TYPE_INDICATOR_ENTRY, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
#line 25 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_g_object_unref0 (self->priv->sorted_items);
#line 25 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	self->priv->sorted_items = (GeeList*) _tmp0_;
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	return self;
#line 150 "IndicatorMenuBar.c"
}


WingpanelWidgetsIndicatorMenuBar* wingpanel_widgets_indicator_menu_bar_new (void) {
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	return wingpanel_widgets_indicator_menu_bar_construct (WINGPANEL_WIDGETS_TYPE_INDICATOR_MENU_BAR);
#line 157 "IndicatorMenuBar.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	return self ? g_object_ref (self) : NULL;
#line 164 "IndicatorMenuBar.c"
}


static gint _wingpanel_services_indicator_sorter_compare_func_gcompare_data_func (gconstpointer a, gconstpointer b, gpointer self) {
	gint result;
	result = wingpanel_services_indicator_sorter_compare_func ((WingpanelServicesIndicatorSorter*) self, (WingpanelWidgetsIndicatorEntry*) a, (WingpanelWidgetsIndicatorEntry*) b);
#line 36 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	return result;
#line 173 "IndicatorMenuBar.c"
}


void wingpanel_widgets_indicator_menu_bar_insert_sorted (WingpanelWidgetsIndicatorMenuBar* self, WingpanelWidgetsIndicatorEntry* item) {
	GeeList* _tmp0_ = NULL;
	WingpanelWidgetsIndicatorEntry* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	WingpanelWidgetsIndicatorEntry* _tmp3_ = NULL;
	WingpanelWidgetsIndicatorMenuBar* _tmp4_ = NULL;
	GeeList* _tmp5_ = NULL;
	WingpanelWidgetsIndicatorEntry* _tmp6_ = NULL;
	GeeList* _tmp7_ = NULL;
	WingpanelServicesIndicatorSorter* _tmp8_ = NULL;
#line 28 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	g_return_if_fail (self != NULL);
#line 28 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	g_return_if_fail (item != NULL);
#line 29 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp0_ = self->priv->sorted_items;
#line 29 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp1_ = item;
#line 29 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp2_ = gee_collection_contains ((GeeCollection*) _tmp0_, _tmp1_);
#line 29 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	if (_tmp2_) {
#line 30 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		return;
#line 201 "IndicatorMenuBar.c"
	}
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp3_ = item;
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp4_ = _g_object_ref0 (self);
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_g_object_unref0 (_tmp3_->menu_bar);
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp3_->menu_bar = _tmp4_;
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp5_ = self->priv->sorted_items;
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp6_ = item;
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	gee_collection_add ((GeeCollection*) _tmp5_, _tmp6_);
#line 36 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp7_ = self->priv->sorted_items;
#line 36 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp8_ = self->priv->sorter;
#line 36 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	gee_list_sort (_tmp7_, _wingpanel_services_indicator_sorter_compare_func_gcompare_data_func, g_object_ref (_tmp8_), g_object_unref);
#line 38 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	wingpanel_widgets_indicator_menu_bar_apply_new_order (self);
#line 225 "IndicatorMenuBar.c"
}


static void wingpanel_widgets_indicator_menu_bar_real_remove (GtkContainer* base, GtkWidget* widget) {
	WingpanelWidgetsIndicatorMenuBar * self;
	WingpanelWidgetsIndicatorEntry* indicator_widget = NULL;
	GtkWidget* _tmp0_ = NULL;
	WingpanelWidgetsIndicatorEntry* _tmp1_ = NULL;
	WingpanelWidgetsIndicatorEntry* _tmp2_ = NULL;
	GtkWidget* _tmp5_ = NULL;
#line 41 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	self = (WingpanelWidgetsIndicatorMenuBar*) base;
#line 41 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	g_return_if_fail (widget != NULL);
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp0_ = widget;
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, WINGPANEL_WIDGETS_TYPE_INDICATOR_ENTRY) ? ((WingpanelWidgetsIndicatorEntry*) _tmp0_) : NULL);
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	indicator_widget = _tmp1_;
#line 44 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp2_ = indicator_widget;
#line 44 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	if (_tmp2_ != NULL) {
#line 250 "IndicatorMenuBar.c"
		GeeList* _tmp3_ = NULL;
		WingpanelWidgetsIndicatorEntry* _tmp4_ = NULL;
#line 45 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		_tmp3_ = self->priv->sorted_items;
#line 45 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		_tmp4_ = indicator_widget;
#line 45 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		gee_collection_remove ((GeeCollection*) _tmp3_, _tmp4_);
#line 259 "IndicatorMenuBar.c"
	}
#line 48 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp5_ = widget;
#line 48 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	GTK_CONTAINER_CLASS (wingpanel_widgets_indicator_menu_bar_parent_class)->remove ((GtkContainer*) G_TYPE_CHECK_INSTANCE_CAST (self, WINGPANEL_WIDGETS_TYPE_MENU_BAR, WingpanelWidgetsMenuBar), _tmp5_);
#line 41 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_g_object_unref0 (indicator_widget);
#line 267 "IndicatorMenuBar.c"
}


void wingpanel_widgets_indicator_menu_bar_apply_new_order (WingpanelWidgetsIndicatorMenuBar* self) {
#line 51 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	g_return_if_fail (self != NULL);
#line 52 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	wingpanel_widgets_indicator_menu_bar_clear (self);
#line 53 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	wingpanel_widgets_indicator_menu_bar_append_all_items (self);
#line 278 "IndicatorMenuBar.c"
}


static void wingpanel_widgets_indicator_menu_bar_clear (WingpanelWidgetsIndicatorMenuBar* self) {
	GList* children = NULL;
	GList* _tmp0_ = NULL;
	GList* _tmp1_ = NULL;
#line 56 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	g_return_if_fail (self != NULL);
#line 57 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp0_ = gtk_container_get_children ((GtkContainer*) self);
#line 57 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	children = _tmp0_;
#line 59 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp1_ = children;
#line 294 "IndicatorMenuBar.c"
	{
		GList* child_collection = NULL;
		GList* child_it = NULL;
#line 59 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		child_collection = _tmp1_;
#line 59 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		for (child_it = child_collection; child_it != NULL; child_it = child_it->next) {
#line 302 "IndicatorMenuBar.c"
			GtkWidget* child = NULL;
#line 59 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			child = (GtkWidget*) child_it->data;
#line 306 "IndicatorMenuBar.c"
			{
				GtkWidget* _tmp2_ = NULL;
#line 60 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
				_tmp2_ = child;
#line 60 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
				GTK_CONTAINER_CLASS (wingpanel_widgets_indicator_menu_bar_parent_class)->remove ((GtkContainer*) G_TYPE_CHECK_INSTANCE_CAST (self, WINGPANEL_WIDGETS_TYPE_MENU_BAR, WingpanelWidgetsMenuBar), _tmp2_);
#line 313 "IndicatorMenuBar.c"
			}
		}
	}
#line 56 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_g_list_free0 (children);
#line 319 "IndicatorMenuBar.c"
}


static void wingpanel_widgets_indicator_menu_bar_append_all_items (WingpanelWidgetsIndicatorMenuBar* self) {
#line 64 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	g_return_if_fail (self != NULL);
#line 326 "IndicatorMenuBar.c"
	{
		GeeList* _widget_list = NULL;
		GeeList* _tmp0_ = NULL;
		GeeList* _tmp1_ = NULL;
		gint _widget_size = 0;
		GeeList* _tmp2_ = NULL;
		gint _tmp3_ = 0;
		gint _tmp4_ = 0;
		gint _widget_index = 0;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		_tmp0_ = self->priv->sorted_items;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		_tmp1_ = _g_object_ref0 (_tmp0_);
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		_widget_list = _tmp1_;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		_tmp2_ = _widget_list;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		_tmp3_ = gee_collection_get_size ((GeeCollection*) _tmp2_);
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		_tmp4_ = _tmp3_;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		_widget_size = _tmp4_;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		_widget_index = -1;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		while (TRUE) {
#line 354 "IndicatorMenuBar.c"
			gint _tmp5_ = 0;
			gint _tmp6_ = 0;
			gint _tmp7_ = 0;
			WingpanelWidgetsIndicatorEntry* widget = NULL;
			GeeList* _tmp8_ = NULL;
			gint _tmp9_ = 0;
			gpointer _tmp10_ = NULL;
			WingpanelWidgetsIndicatorEntry* _tmp11_ = NULL;
			WingpanelIndicator* _tmp12_ = NULL;
			gboolean _tmp13_ = FALSE;
			gboolean _tmp14_ = FALSE;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_tmp5_ = _widget_index;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_widget_index = _tmp5_ + 1;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_tmp6_ = _widget_index;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_tmp7_ = _widget_size;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			if (!(_tmp6_ < _tmp7_)) {
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
				break;
#line 378 "IndicatorMenuBar.c"
			}
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_tmp8_ = _widget_list;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_tmp9_ = _widget_index;
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_tmp10_ = gee_list_get (_tmp8_, _tmp9_);
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			widget = (WingpanelWidgetsIndicatorEntry*) _tmp10_;
#line 66 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_tmp11_ = widget;
#line 66 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_tmp12_ = _tmp11_->base_indicator;
#line 66 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_tmp13_ = wingpanel_indicator_get_visible (_tmp12_);
#line 66 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_tmp14_ = _tmp13_;
#line 66 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			if (_tmp14_) {
#line 398 "IndicatorMenuBar.c"
				WingpanelWidgetsIndicatorEntry* _tmp15_ = NULL;
#line 67 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
				_tmp15_ = widget;
#line 67 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
				gtk_menu_shell_append ((GtkMenuShell*) self, (GtkWidget*) ((GtkMenuItem*) _tmp15_));
#line 404 "IndicatorMenuBar.c"
			}
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
			_g_object_unref0 (widget);
#line 408 "IndicatorMenuBar.c"
		}
#line 65 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
		_g_object_unref0 (_widget_list);
#line 412 "IndicatorMenuBar.c"
	}
}


static void wingpanel_widgets_indicator_menu_bar_class_init (WingpanelWidgetsIndicatorMenuBarClass * klass) {
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	wingpanel_widgets_indicator_menu_bar_parent_class = g_type_class_peek_parent (klass);
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	g_type_class_add_private (klass, sizeof (WingpanelWidgetsIndicatorMenuBarPrivate));
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	((GtkContainerClass *) klass)->remove = wingpanel_widgets_indicator_menu_bar_real_remove;
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	G_OBJECT_CLASS (klass)->finalize = wingpanel_widgets_indicator_menu_bar_finalize;
#line 426 "IndicatorMenuBar.c"
}


static void wingpanel_widgets_indicator_menu_bar_instance_init (WingpanelWidgetsIndicatorMenuBar * self) {
	WingpanelServicesIndicatorSorter* _tmp0_ = NULL;
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	self->priv = WINGPANEL_WIDGETS_INDICATOR_MENU_BAR_GET_PRIVATE (self);
#line 22 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_tmp0_ = wingpanel_services_indicator_sorter_new ();
#line 22 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	self->priv->sorter = _tmp0_;
#line 438 "IndicatorMenuBar.c"
}


static void wingpanel_widgets_indicator_menu_bar_finalize (GObject* obj) {
	WingpanelWidgetsIndicatorMenuBar * self;
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WINGPANEL_WIDGETS_TYPE_INDICATOR_MENU_BAR, WingpanelWidgetsIndicatorMenuBar);
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_g_object_unref0 (self->priv->sorted_items);
#line 22 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	_g_object_unref0 (self->priv->sorter);
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Widgets/IndicatorMenuBar.vala"
	G_OBJECT_CLASS (wingpanel_widgets_indicator_menu_bar_parent_class)->finalize (obj);
#line 452 "IndicatorMenuBar.c"
}


GType wingpanel_widgets_indicator_menu_bar_get_type (void) {
	static volatile gsize wingpanel_widgets_indicator_menu_bar_type_id__volatile = 0;
	if (g_once_init_enter (&wingpanel_widgets_indicator_menu_bar_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WingpanelWidgetsIndicatorMenuBarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) wingpanel_widgets_indicator_menu_bar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WingpanelWidgetsIndicatorMenuBar), 0, (GInstanceInitFunc) wingpanel_widgets_indicator_menu_bar_instance_init, NULL };
		GType wingpanel_widgets_indicator_menu_bar_type_id;
		wingpanel_widgets_indicator_menu_bar_type_id = g_type_register_static (WINGPANEL_WIDGETS_TYPE_MENU_BAR, "WingpanelWidgetsIndicatorMenuBar", &g_define_type_info, 0);
		g_once_init_leave (&wingpanel_widgets_indicator_menu_bar_type_id__volatile, wingpanel_widgets_indicator_menu_bar_type_id);
	}
	return wingpanel_widgets_indicator_menu_bar_type_id__volatile;
}



