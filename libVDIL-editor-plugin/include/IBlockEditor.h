/*******************************************
Copyright 2017 OOO "LMS"

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.*/

#ifndef IBLOCKEDITOR_H
#define IBLOCKEDITOR_H

#include <QWidget>
#include <VDIL/core/BaseBlock.h>
#include "IEditorHelper.h"

namespace WLIOTVDIL
{
	class IBlockEditor
	{
	public:
		virtual ~IBlockEditor(){}
		virtual QWidget* mkEditingWidget(IEditorHelper *helper,QWidget *parent=0)=0;
		virtual void loadParamsFromBlock(IEditorHelper *helper,QWidget *editingWidget,const BaseBlock *block)=0;
		virtual void saveParamsToBlock(IEditorHelper *helper,QWidget *editingWidget,BaseBlock *block)=0;
		virtual QPixmap previewImage()const=0;
		virtual QString description()const=0;//displayed in a tooltip in the blocks tree
		virtual QString typeName()const=0;//displayed on a block
		virtual QString treeName()const=0;//displayed in the blocks tree
		virtual QString hint(IEditorHelper *helper,BaseBlock *block)const=0;
			//is displayed on a block (cut + full in tooltip) and describes block's configuration
		virtual QString wikiLink()const=0;
	};
}

#endif // IBLOCKEDITOR_H
